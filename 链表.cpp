#include <stdio.h>
#include <stdlib.h>
struct asd{
	int a;
	struct asd *b;
};
struct asd *fad(struct asd *first,int l1,int l2); 
struct asd *add(struct asd *first,int n);   
struct asd *del(struct asd *first,int m);
void print(struct asd *first);
int main(void){
	int n,t1,i;
	struct asd *first,*p,*q,*head;
	scanf("%d",&t1);
	first=NULL;
	for(i=0;i<t1;i++){
		scanf("%d",&n);
		first=add(first,n);
	}
	int t2,m;
	scanf("%d",&t2);
	for(i=0;i<t2;i++){
		scanf("%d",&m);
		first=del(first,m);
	}
	//print(first);
	int t3,l1,l2;
	scanf("%d",&t3);
	for(i=0;i<t3;i++){
		scanf("%d",&l1);
		scanf("%d",&l2);
		first=fad(first,l1,l2);
	}
	print(first);
} 
struct asd *add(struct asd *first,int n){
	struct asd *next;
	next=(struct asd *)malloc(sizeof(struct asd));
	next->b=first;
	next->a=n;
	return next;
}
void print(struct asd *first){
	if(first!=NULL){
		printf("%d\n",first->a);
		print(first->b);
	}
	return;
}
struct asd *del(struct asd *first,int m){
	struct asd *p,*q;
	for(p=first,q=NULL;p!=NULL&&p->a!=m;q=p,p=p->b); //特别注意 特别注意 特别注意  特别注意 特别注意 特别注意 特别注意 特别注意 特别注意 特别注意 注意这个地方 “p!=NULL&&p->a!=m ”运算符两边表达式不能够调换顺序！ 
	if(p==NULL){
		return first;
	} 
	if(q!=NULL){
	   	q->b=p->b;
	   	free(p);
		}
	else if(q==NULL){
	    first=first->b;
	}
	return first;
}
struct asd *fad(struct asd *first,int l1,int l2){
	struct asd *o1,*o2,*add;
	add=(struct asd*)malloc(sizeof(struct asd));
	add->a=l2;
	int i;
	o1=first;
	o2=NULL;
	for(i=0;i<l1-1;i++){
		o2=o1;
		o1=o1->b;
	}
	if(o2==NULL){
		add->b=first;
		first=add;
	}
	else{
		o2->b=add;
		add->b=o1;
	}
	return first;
}

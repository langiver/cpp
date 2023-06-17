#include<iostream>
using namespace std;
class qimo{
	public:
		void chengji(){
			while(1){
				char name[100];
				float a,b,c;
					scanf("%s",&name);
				cin>>a;
				cin>>b;
				c=a*0.4+b*0.6;
				printf("%s %.2f %.2f %.2f",name,a,b,c);
			}
		}
		
}; 
int main(){
	qimo q;
	q.chengji();
	return 0;
}

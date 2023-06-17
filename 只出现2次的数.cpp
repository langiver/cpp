#include<iostream>
using namespace std;
class two{
	public:
		two(int n){
			x=n;
		}
		void tongji(int a[]){
			int mark2=0;
			for(int i=0;i<x;i++){
			int mark1=0,mark3=0;
				for(int j=i+1;j<x;j++){
					if(a[i]==a[j])
					mark1++;
				}
				if(mark1==1){
					for(int j=0;j<i;j++){
						if(a[i]==a[j])
						mark3++;
					}
				if(mark3==0){
				cout<<a[i]<<" ";
				mark2++;
				}
				}
			}if(mark2==0)
				cout<<"none";
		}
	private:
		int x;
};
int main(){
	int n;
	cin>>n;
	two t(n);
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	t.tongji(a);
	return 0;
}

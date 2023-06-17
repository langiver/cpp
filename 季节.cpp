#include<iostream> 
using namespace std;
class jijie{
	public:
	jijie(int x){
		X=x;
	}	
	void output(){
		switch(X){
			case 1:cout<<"Spring"<<endl;break; 
			case 2:cout<<"Summer"<<endl;break; 
			case 3:cout<<"Fall"<<endl;break;
			case 4:cout<<"Winter"<<endl;break; 
		}
		
	}
    private:
    	int X;
}; 
int main(){
	int x;
	cin>>x;
	jijie J(x);
	J.output();
	return 0;
}

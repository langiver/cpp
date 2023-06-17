#include<iostream> 
using namespace std;
class nianling{
	public:
	nianling(int x){
		X=x;
	}	
	void output(){
		switch(X){
			case 0 ... 59:cout<<"E"<<endl;break; 
			case 60 ... 69:cout<<"D"<<endl;break; 
			case 70 ... 79:cout<<"C<<endl;break;
			case 80 ... 89:cout<<"B"<<endl;break;
			case 90 ... 100:cout<<"A"<<endl;break;
 
		}
		
	}
    private:
    	int X;
}; 
int main(){
	int x;
	cin>>x;
	nianling J(x);
	J.output();
	return 0;
}

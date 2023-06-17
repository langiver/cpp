#include<iostream> 
using namespace std;
class nianling{
	public:
	nianling(int x){
		X=x;
	}	
	void output(){
		switch(X){
			case 1 ... 10:cout<<"Children"<<endl;break; 
			case 11 ... 20:cout<<"Teenagers"<<endl;break; 
			case 21 ... 40:cout<<"Youth"<<endl;break;
			case 41 ... 50:cout<<"middle-age"<<endl;break;
			case 51 ... 80:cout<<"Elderly"<<endl;break;
			case 81 ... 100:cout<<"Old man"<<endl;break; 
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

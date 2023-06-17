#include<iostream>
using namespace std;
class GeWeiHe{
	public:
		GeWeiHe(int x){
		y=x;
		 }
		int GeiWoDaAn(){
		int t=0;
		while(y!=0){
			t+=y%10;
			y/=10;
		}
		return t;
		} 
	private:
		int y;
}; 
int main(){
	int x;
	cin>>x;
	GeWeiHe g(x);
    cout<<g.GeiWoDaAn();
    return 0;
}

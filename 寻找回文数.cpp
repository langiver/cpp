#include<iostream>
using namespace std;
class Huiwen{
	public:
		Huiwen(int n){
			N=n;
			i=0; 
		}
		void search(){
			for(int b=0;b<N;b++){
				cin>>M;
				cin>>K;
			while(i<K){
				int x=M;
				int y=0;
				while(x>0){
					int d;
					d=x%10;
					x=x/10;
					y=y*10+d;
				}
				if(M==y){
					a[i]=M;
					i++;
				}
				M++;
			}
		for(i=0;i<K;i++){
		cout<<a[i]<<" ";
		}
		printf("\n");
		}
		}
	private:
		int N,M,K,i,a[];		
}; 
int main(){
	int n;
	cin>>n;
	Huiwen h(n);
	h.search();
	return 0;
}

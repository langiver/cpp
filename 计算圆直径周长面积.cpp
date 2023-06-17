#include<iostream>
using namespace std; 
class Round{
	public:
		Round(float r){
		R=r;
		}
		void jisuan(){
			D=2*R;
			L=D*3.14;
			S=R*R*3.14;
		}
		void shuchu(){
		printf("直径=%.2f\n周长=%.2f\n面积=%.2f\n",D,L,S);
		}
	private:
		float R,D,L,S;
};
int main(){
	int r;
	cin>>r;
	Round R(r);
	R.jisuan();
	R.shuchu();
	return 0;
} 

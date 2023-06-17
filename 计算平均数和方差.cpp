#include<iostream>
using namespace std;
class PJSFC{
	public:
		PJSFC(){
			sum=0;
		}
		void shuru(){
			for(int i=0;i<6;i++){
				cin>>a[i];
			}
		}
		void jisuan(){
			for(int i=0;i<6;i++){
				sum+=a[i];
			}
			ave=sum/6;
			sum=0;
	    	for(int i=0;i<6;i++){
	    		sum+=(a[i]-ave)*(a[i]-ave); 
		    }
		    fc=sum/6;
		}
		void shuchu(){
			printf("%.2f %.2f",ave,fc);
		}
			
	private:
		float sum,fc,ave;
		int a[6];
};
int main(){
	int n;
	cin>>n;
	PJSFC p;
	for(int i=0;i<n;i++){
		p.shuru();
		p.jisuan();
		p.shuchu();
	}
	return 0;
}

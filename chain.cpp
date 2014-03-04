#include<iostream>
using namespace std;
#define MAX 55
int main() {
	int max=-99999999;
	int ratio=0,count=0,temp;
	int n,m,pedal[MAX],wheel[MAX];
	cin>>n;
	for(int i=0;i<n;++i) {
		cin>>pedal[i]; 
}
	cin>>m;
	for(int i=0;i<m;++i) {
		cin>>wheel[i];
			}
	for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j) {
			//	temp=wheel[j]/pedal[i];
				temp=wheel[j]%pedal[i];
			if(temp==0) {
					ratio=wheel[j]/pedal[i];
		//cout<<"ratio:"<<ratio<<" ";
				if(ratio>max) {
				max=ratio;
				count=1;
				}
			else if(ratio==max) {
				++count;
			}
			else { }
			}
		}
		}
	
cout<<count<<endl;
return 0;
}


			
				

#include<iostream>
#define MAX 105
using namespace std;

int main(){

int n,sum=0;
int flag=0;
int smallest=9999999;
int petals[MAX];
cin>>n;
for(int i=0;i<n;++i) { cin>>petals[i];
		if(petals[i]%2) {
			if(petals[i]<smallest) { flag=1;smallest=petals[i];  } 
			}
		sum+=petals[i];
		}
if(sum%2) { cout<<sum<<endl;return 0; }
if(!flag) {cout<<"0"<<endl; return 0; }
 cout<<sum-smallest<<endl; 
return 0;
}

	

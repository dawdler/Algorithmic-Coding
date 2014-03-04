#include<iostream>
using namespace std;
#define MAX 100010
int main()
{
int count=0,temp;

int list[MAX];
for(int i=1;i<MAX;++i) {
		list[i]=i;
		
		}

int n,k;
cin>>n>>k;
if(n-k==1) {
				for(int i=n;i>=1;--i) 
			{  cout<<list[i]<<" " ;
			}
	return 0;
}


for(int i=1;i<=n;i+=2) { 
		if(k==0) break;	
		temp=list[i];
		if(i+1>=n) {
			list[i]=list[1];
			list[1]=temp; }
		else {
				
		list[i]=list[i+1];
		list[i+1]=temp;  }
		++ count;
// }
		if(count==k) break;
}
for(int i=1;i<=n;++i) {
		cout<<list[i]<<" ";
		}
return 0;
}
	

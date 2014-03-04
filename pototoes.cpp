#include<iostream>
using namespace std;

int main()
{
int y,k,n;
int flag=0;
cin>>y>>k>>n;
for(int i=k;i<=n;i+=k) {
		if((i-y)>0)  { flag=1;cout<<i-y<<" "; }
	}
if(flag==0) cout<<"-1";
return 0;
}


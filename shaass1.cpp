#include<iostream>
using namespace std;
#define MAX 102

int main()
{
int n,m,a[MAX]={0};
int x,y;
cin>>n;
for(int i=1;i<=n;++i) cin>>a[i];
cin>>m;
for(int i=1;i<=m;++i) {
	cin>>x>>y;
		if(x-1>=0) a[x-1]+=y-1;
		
		if(x+1<=n) a[x+1]+=a[x]-y;
		a[x]=0;
	}
for(int i=1;i<=n;++i) {
	cout<<a[i]<<endl;
	}
return 0;
}


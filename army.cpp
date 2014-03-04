#include<iostream>
using namespace std;

int main()
{
int ranks[102];
ranks[0]=0;
ranks[1]=0;
int n,a,b;
cin>>n;
int sum=0;
for(int i=1;i<=(n-1);++i) cin>>ranks[i+1];
cin>>a>>b;
for(int i=a+1;i<=b;++i) {
		sum+=ranks[i];
	}
cout<<sum<<endl;
return 0;
}

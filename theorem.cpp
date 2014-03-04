#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int count=0;
int n,t;
int c=0;
cin>>n;
for(int i=1;i<=n;++i) {
	for(int j=1;j<=n;++j) {
			
			 int p=(i*i+j*j);
			int a=sqrt(p);
		if(a*a==p && a<=n) ++count;
		
	}
}
cout<<count<<endl;
	return 0;
}


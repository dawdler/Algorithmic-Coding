#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int n,t;
int high,low;
int prev,height;
cin>>t;
for(int j=0;j<t;++j) {
high=0,low=0;
cin>>n;
cin>>prev;
for(int i=1;i<n;++i) {
	
	cin>>height;
	if(height>prev) ++high;
	else if(height<prev) ++low;
	else { }	
	prev=height;
	}
printf("Case %d: %d %d\n",j+1,high,low);
}
return 0;
}



	

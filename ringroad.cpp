#include<iostream>
using namespace std;
#define MAX 100009
int main()
{ 
int n,m;
int r=0;
int list[MAX];
int result=0;
cin>>n>>m;
for(int i=0;i<m;++i) { 
	cin>>list[i];
	}
//1st task
result+=list[0]-1;
for(int i=1;i<m;++i) { 
	if(list[i]<list[i-1])  { 
	r=n-list[i-1];
	result=result+r+list[i];

	
	}
	else  { 
	result+=(list[i]-list[i-1]);	
	}
	}
cout<<result;
}

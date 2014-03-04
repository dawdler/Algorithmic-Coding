#include<iostream>
using namespace std;
#define MAX 100010
#define MAX1 1010

class trace {
public:
	int flag;
		int pos;

trace() {
		flag=0,pos=0; }
}trace1[MAX1];
int main()
{
int t,flag=1;
int count=0;
long long x,n,temp;
long long list[MAX];
//long long trace[MAX1];
cin>>t;
while(t--) {
	count=0;		
//for(int i=0;i<MAX1;++i) trace[i]=0;
		cin>>x;
		cin>>n;
		for(int i=0;i<n;++i) { 
flag=1;       
cin>>list[i]; 
trace1[list[i]].flag++;
if(flag)
trace1[list[i]].pos=i;
flag=0; }
		
for(int i=0;i<n;++i) {
		temp=x-list[i];
		if(trace1[temp].flag && trace1[temp].pos>i) { 
			if(trace1[temp].flag>1) count+=trace1[temp].flag-1;	
	else ++count;

}
}
cout<<count<<endl;
}
return 0;
}



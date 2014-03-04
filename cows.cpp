#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
char w;
char c;
int n1;
char n;
int A=0,F=0,I=0;
cin>>n;
n1=n-'0';

for(int i=0;i<n1;++i) {
	cin>>w;
	if(w=='A') { ++A; }
	else if(w=='F') ++F;
	else ++I;
}
//if(A==0 &&F==0) { cout<<"0"<<endl; return 0; }
if(I>1) { cout<<"0"<<endl; return 0; }
if(I==1) { cout<<cout<<"1"<<endl; return 0; }
cout<<A<<endl;

return 0;
}


		
			

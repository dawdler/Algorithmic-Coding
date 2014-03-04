#include<iostream>
using namespace std;

int main() 
{
long long int a,b;
int x,y;
cin>>x>>y>>a>>b;
int count=0;
for(int i=a;i<=b;++i) { 
 if(i%x==0 && i%y==0) ++count;

	}
cout<<count<<endl;
return 0;
}

 

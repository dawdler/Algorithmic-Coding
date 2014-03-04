#include<iostream>
using namespace std;
long long a,d,r,n,m;
long long oddfun(long long n);
long long  evenfun(long long n)
{
if(n==2)
return a+d;
else return d+oddfun(n-1);
}
long long oddfun(long long n)
{
if(n==1)
return a;
else return r*evenfun(n-1);
}
int main()
{
long long  t,res;
cin>>t;
for(long long i=0;i<t;i++)
{
cin>>a>>d>>r>>n>>m;
if(n&1)
res=oddfun(n)%m;
else
res=evenfun(n)%m;
cout<<res<<endl;
}
return 0;
}




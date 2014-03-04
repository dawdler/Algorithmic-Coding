#include<iostream>
#include<algorithm>

using namespace std;

int main() { 
int n;
long long int result,ans=-11111111;

int count=0;
cin>>n;
int digits[n];
for(int i=0;i<n;++i)  {cin>>digits[i]; if(digits[i]==5) ++count;  }
sort(digits,digits+n);

int noz=n-count;
//cout<<"noz:"<<noz<<endl;

result=0;
int flag=0;
while(count!=0) { 
result=0;
//cout<<"I m here\n"<<endl;
for(int i=0;i<count;++i) result=result*10+5;
long long int zero=1;
for(int i=1;i<=noz;++i) zero=zero*10;
result=result*zero;
//cout<<"resilt:"<<result<<endl;
if(result%90==0) { 
flag=1;
if(result>ans)
ans=result;

}
--count;
}
if(flag)
{ cout<<ans<<endl; return 0;}

if(noz) cout<<"0"<<endl;
else cout<<"-1"<<endl;
return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int count=0;
unsigned long long num=1;
unsigned long long n,i,temp=1,temp1,res,rem;
cin>>n;
if(n==1 || n==2) { cout<<"-1"<<endl; return 0; }
if(n==3) { cout<<"210"<<endl; return 0;}
for(i=1;i<=n-1;++i) {

	num=(num*10)%210;
	//cout<<"Rem:"<<num<<endl;
	//temp=temp*10;
}
rem=210-num;
temp1=rem;
while(temp1>0) { temp1/=10;++count; }
//cout<<"No of zero's"<<count<<endl;
cout<<"1";
for(i=0;i<(n-count-1);++i) cout<<"0";
cout<<rem;

/*if((temp+210-num)!=210) cout<<temp+210-num<<endl;
else cout<<"-1"<<endl;*/
//cout<<pow(n,10)+(210-res)<<endl;

}


		

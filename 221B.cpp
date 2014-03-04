#include<iostream>
#include<cmath>
using namespace std;
int digit[15];
int i=0;
int check(long long int num) {
int rem;	
while(num>0) {
		rem=num%10;	
for(int k=0;k<i;++k) {
		if(rem==digit[k]) return 1;
}
num=num/10;
}
return 0;
}
int main()
{long long int n,temp;
int count=0,flag=0;

cin>>n;
temp=n;
while(temp>0) {
	digit[i]=temp%10;
	temp=temp/10;
	++i;
}
for(int a=0;a<i;++a) cout<<digit[a]<<endl;
if(n==1) { cout<<1<<endl; return 0; }

count=i-2;
//cout<<"i:"<<i<<endl;
for(long long int j=1;j<=sqrt(n);++j) {
	if(n%j==0)	{
		flag=check(j);
	if(flag==1) ++count;
	if(j*j==n) ++count;
}

}
cout<<count<<endl;
}


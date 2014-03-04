#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 10010
int p[MAX];
int size;
int aa[MAX];
int prime[3263];
int phi(int n)
{
int res=n;
for(int i=0;;i++)
{
if(n%prime[i]==0)
res-=res/prime[i];
while(n%prime[i]==0)n/=prime[i];
if(!(n/prime[i])) break;
}
if(n>1)
res-=res/n;
//p[n]=res;
return res;
}

void seive()
{
int i,j;
prime[0]=2;
for(i=2;i<=MAX;i+=2)
	aa[i]=1;
for(i=3;i*i<MAX;i+=2)
{
if(!aa[i])
	{
		for(j=i*i;j<MAX;j+=2*i)
		aa[j]=1;
	}
}
size=1;
for(i=3;i<MAX;i++)
	{if(!aa[i]) 
	prime[size++]=i;}
prime[0]=2;
}

int main()
{
seive();
//phi();
//for(int i=0;i<10;i++)cout<<prime[i]<<" ";
int  t,n,res,res1,res2;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
if(p[i]==0 && p[j]==0) { 
res1=phi(i);res2=phi(j);
res+=(res1*res2);
p[i]=res1,p[j]=res2;
}
else if(p[i]==0 && p[j]!=0) {
	res1=phi(i);
	res+=res1*p[j];
p[i]=res1;
}
else if(p[j]==0 && p[i]!=0) {
	res1=phi(j);
	res+=res1*p[i];
		p[j]=res1;
}
else res+=(p[i]*p[j]);

}
printf("%d\n",res);//<<endl;
printf("\n");
}
return 0;
}

#include<stdio.h>
#include<math.h>
#define max 10000000
#define max2 3162
long long int ar[max+10];int aa[max];
//void f();

void seive()
{
int i,j;
//aa[2]=2;
//iaa[3]=3;
//primes[0]=2;
for(i=2;i<=max;i+=2)
	aa[i]=2;
for(i=3;i<=max;i+=2)
{
if(!aa[i])
	{
		for(j=2*i;j<=max;j+=i)
		if(!aa[j]) 
		aa[j]=i;
	}
}
//j=1;

for(i=3;i<=max;i++)
	{if(!aa[i])  aa[i]=i; }
	
}
/*
void f()
{
int i,j,k;
for(j=2;j<=max;j+=2)
lowestprime[j]=2;
for(j=3;j<max;j+=2)
{
int flag=0;
k=sqrt(j);
for(i=0;i<446 && k>=primes[i];i++)
	{
	if(j%primes[i] == 0) 
		{lowestprime[j]=primes[i];flag=1;break;}
	}
	if(flag==0)
	lowestprime[j]=j;
}
}*/

int main()
{
int i,t;
seive();
ar[0]=0;
ar[1]=0;
//f();
for(i=2;i<=max;i++)
ar[i]=ar[i-1]+aa[i];
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
printf("%lld\n",ar[n]);
}
return 0;
}

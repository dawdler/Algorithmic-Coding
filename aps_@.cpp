#include<stdio.h>

#define max 10000000
#define max2 10000

long int ar[max+10];int primes[1229],aa[max2];
int f(int );

void seive()
{
int i,j;
primes[0]=2;
for(i=2;i<=max2;i+=2)
	aa[i]=1;
for(i=3;i<max2;i+=2)
{
if(!aa[i])
	{
		for(j=2*i;j<max2;j+=i)
		aa[j]=1;
	}
}
j=1;
for(i=3;i<max2;i++)
	{if(!aa[i]) 
	primes[j++]=i;}
primes[0]=2;
}

void memo(int n)
{
int i;
for(i=2;i<=n;i++)
ar[i]=ar[i-1]+f(i);
}

int f(int n)
{
int i;
for(i=0;i<1229 && n>primes[i];i++)
	{
	if(n%primes[i] == 0) 
		return primes[i];
	}
return n;
}

int main()
{
seive();
ar[0]=0;
ar[1]=0;
memo(max);
int t;
scanf("%d",&t);
while(t--)
{
int n;
scanf("%d",&n);
printf("%ld\n",ar[n]);
}
return 0;
}

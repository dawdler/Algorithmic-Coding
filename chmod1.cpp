#include<stdio.h>
#include<string.h>
#define MAX 100009
long long table[25][MAX];

long long powe(long long a,long long  b,long long m)
{
if(b==0)
return 1;
if(b==1)
return a%m;
long long tmp=powe(a,b/2,m);
if(b&1)
return (((tmp*tmp)%m)*a)%m;
return (tmp*tmp)%m;
}
int main()
{
int primes1[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
int n,i,a[MAX],j,k,num,res1,t,l,r,m;
int res;//,flag1;
//int fac[100];
memset(table,0,sizeof(table));
//memset(fac,0,sizeof(fac));
memset(a,0,sizeof(a));
 
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
num=a[i];
for(j=0;j<25;j++)
{
res1=0;
if(num%primes1[j]==0)
while(num%primes1[j]==0)
{
res1++;
num/=primes1[j];
}
if(i!=0)
table[j][i]+=(res1+table[j][i-1]);
else 
table[j][i]+=(res1);
}
}
scanf("%d",&t);
for(i=0;i<t;i++)
{
res=1;

scanf("%d%d%d",&l,&r,&m);
for(k=0;k<25;k++)
{
if(table[k][r-1]){
if(l!=1)
res=(res*powe(primes1[k],table[k][r-1]-table[k][l-2],m))%m;
else
res=(res*powe(primes1[k],table[k][r-1],m))%m;
}
}
printf("%d\n",res%m);
}
 
return 0;
}

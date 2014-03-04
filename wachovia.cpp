#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t,W,n;
int v[1001],w[1001],m[1001][1001];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&W,&n);
for(int i=0;i<=1000;++i) 
		for(int j=0;j<=55;++j)  m[i][j]=0;

for(int i=1;i<=n;i++)
scanf("%d %d",&w[i],&v[i]);
for(int i=1;i<=n;i++)
{
for(int j=0;j<=W;j++)
{
if(j>=w[i])
m[i][j]=max(m[i-1][j-w[i]]+v[i],m[i-1][j]);



else
m[i][j]=m[i-1][j];
}
}
printf("Hey stupid robber, you can get ");
printf("%d",m[n][W]);printf(".\n\n");
}
return 0;
}

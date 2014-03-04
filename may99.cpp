#include<iostream>
#include<cstdio>
#include<algorithm>
#define mod 10000007
using namespace std;
int a[105][105];
void pascal_tri()
{
   int i,j;
   a[0][0]=a[1][0]=a[1][1]=1;
   for(i=2;i<=105;i++)
   {
      a[i][0]=1;
      a[i][i]=1;
      for(j=1;j<i;j++)
      {
         a[i][j]=(a[i-1][j-1]%mod+a[i-1][j]%mod)%mod;
      }
   }
}
int main()
{
int sum=0;
pascal_tri();
int frnd,muff;
scanf("%d%d",&muff,&frnd);
if(muff==frnd) { printf("1\n"); }
else if(muff<frnd) { printf("-1\n"); }
else printf("%d",a[muff-1][frnd-1]);
//printf("%d\n",sum);
return 0;
}


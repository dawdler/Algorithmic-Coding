#include<iostream>
#include<cstdio>
#include<algorithm>
#define mod 1000000007
using namespace std;
int a[10005][5000];
void pascal_tri()
{
   int i,j;
   a[0][0]=a[1][0]=a[1][1]=1;
   for(i=2;i<=10000;i++)
   {
      a[i][0]=1;
      a[i][i]=1;
      for(j=1;j<i;j++)
      {
         a[i][j]=(a[i-1][j-1]%mod+a[i-1][j]%mod)%mod;
      }
   }
   
/*   for(i=0;i<=10;i++)
   {
      for(j=0;j<=i;j++)
      {
         cout<<a[i][j]<<" ";
      }
      cout<<endl;
   }*/
}
int aa[10005];
main()
{
   
   int t,n,k,ccase=1,i;
   pascal_tri();
   long long ans=0;
   scanf("%d",&t);
   while(t--)
   {ans=0;
      scanf("%d%d",&n,&k);
      
      for(i=0;i<n;i++)
      {
         scanf("%d",&aa[i]);
      }
      sort(aa,aa+n);
      for(i=n-1;i>=k-1;i--)
      {
         ans+=((long long)(aa[i]%mod)*(long long)(a[i][k-1]%mod))%mod;
      }
      printf("Case #%d: %lld\n",ccase,ans);
      ccase++;
   }
   return 0;
}

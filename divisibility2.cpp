#include <stdio.h>
#include <math.h>
 
static int list[10005];
static int memo[105][10005];
static int n;
static int k;
int max(int a,int b)
{
return (a<b) ? b:a;
}
int mod(int x,int y)
{
    if(x<0)
        x=x+(-x/y+1)*y;
    return x%y;
}
int min(int a,int b)
{
return (a<b) ? a:b;
}
 int ways(int v,int i)
{
if(i==n) 
{
    if(mod(v,k)==0)
        return 1;
    else
        return 0;
}
if(memo[mod(v,k)][i]!=-1)
        return  memo[mod(v,k)][i];
return memo[mod(v,k)][i]=max(ways(v-list[i],i+1),ways(v+list[i],i+1));
}
 
int main()
{
    int x,q,i,j,r,c,t;
    scanf("%d",&x);
    while(x-->0)
    {
        scanf("%d %d",&n,&k);
        for( i=0;i<n;i++)
            scanf("%d",&list[i]);
             
        for(i=0;i<105;i++)
            for(j=0;j<10005;j++)
                memo[i][j]=-1;
                q=ways(0,0);
        if(q!=0)
                printf("Divisible\n");
        else
            printf("Not divisible\n");                 
    }
    return 0;
}

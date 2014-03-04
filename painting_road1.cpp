#include<cstdio>
#include<cstring>
using namespace std;

#define SZ 1000
int a[SZ][SZ];
int s[SZ],e[SZ],c[SZ];
int min(int x, int y)
{
    if(x!=0 && x<y)
        return x;
    return y;
}
int main()
{
    int t,n,k,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        for(i=1;i<=k;++i)
        {
            scanf("%d%d%d",&s[i],&e[i],&c[i]);
        }
        //printf("hello\n");
        for(j=1;j<=n;++j)
        {
            for(i=1;i<=k;++i)
            {
                if((s[i]<j)&&(j<=e[i]))
                {
                    a[i][j]=min(a[i-1][j],a[k][s[i]]+c[i]);
                }
                else
                {
                    a[i][j]=a[i-1][j];
                }
            }
            if(!a[k][j])
                break;
        }
        if(a[k][n])
            printf("%d\n",a[k][n]);
        else
            printf("-1\n");
        memset(a,0,SZ*SZ*sizeof(int));
    }
    return 0;
}

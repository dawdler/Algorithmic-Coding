#include<stdio.h>
int max(int a,int b)
{
if(a>b)
return a;
else return b;
}

int a[800010],b[800010],c[800010];
int main()
{
        int i,j,n,m,maz;
        scanf("%d %d",&n,&m);
        b[0]=0;
        a[0]=0;
        c[0]=0;
        for(i=1;i<=n;i++)
                {scanf("%d",&a[i]);
                        c[i]=0;b[i]=0;}
        for(i=1;i<=m;i++)
        {
                maz=0;
                for(j=1;j<=n;j++)
                {

                if(b[j]==0&&a[j]>maz)
                {b[j]=i;maz=max(maz,a[j]);c[a[j]]=i;}

                }
        }
        for(i=1;i<=n;i++)
        printf("%d ",b[i]);
        printf("\n");
        for(i=1;i<=n;i++)
        printf("%d ",c[i]);
        return 0;
}

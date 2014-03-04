#include <stdio.h>
char map[30][30];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
char g;
int max(int a,int b)
{return(a>b)?a:b;}
int clear(int i,int j,int n,int m)
{
    if(i>=0&&i<n&&map[i][j]==g)
    {
        map[i][j]=0;
        int d,s;
        s = 1;
        for(d=0;d<4;d++)
            s+=clear(i+dx[d],(j+m+dy[d])%m,n,m);
        return s;
    }
    return 0;
}
int main()
{
    int i,j,x,c,y,m,n;
    while(scanf("%d %d",&n,&m)==2)
    {
        getchar();
        for(i=0;i<n;i++,getchar())
            for(j=0;j<m;map[i][j++]=getchar());
        scanf("%d %d",&x,&y);
        g = map[x][y];
        clear(x,y,n,m);
        c = 0;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                if(map[i][j]==g)
                    c=max(c,clear(i,j,n,m));
        printf("%d\n",c);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
#define INF 200000005
#define MAXD 20005
int u, v, w, S, T, n, m, N;
int d[MAXD][MAXD], f[MAXD];
bool vis[MAXD];

int min( int a, int b)
{
    return a < b ? a : b;
}

void init()
{
    for( int i = 0; i < n; i ++)
        f[i] = ( i == S ? 0 : INF );
    memset( vis, false, sizeof vis);
    for( int i = 0; i < n; i ++)
        for( int j = 0; j < n; j ++)
        {
            if( i == j) d[i][j] = 0;
            else d[i][j] = INF;
        }
    for( int i = 0; i < m; i ++)
    {
        scanf( "%d%d%d", &u, &v, &w);
        d[u][v] = d[v][u] = w;
    }
}

void dijkstra()
{
    for( int i = 0; i < n; i ++)
    {
        int x, tt = INF;
        for( int y = 0; y < n; y ++)
            if( !vis[y] && f[y] <= tt)
                tt = f[ x = y];
        vis[x] = true;
        for( int y = 0; y < n; y ++) {
            f[y] = min( f[y], f[x] + d[x][y]);
        }
    }
}

int main()
{
    scanf( "%d", &N);
    for( int cas = 1; cas <= N; cas ++)
    {
        scanf( "%d%d%d%d", &n, &m, &S, &T);
        init();
        dijkstra();
        if( f[T] >= INF) printf( "Case #%d: unreachable\n", cas);
        else
            printf( "Case #%d: %d\n", cas, f[T]);
    }
    return 0;
}

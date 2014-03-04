#include <cstdio>
#define MAX 102
char map[MAX][MAX];
void DFS(int r, int c)
{
  map[r][c] = ‘*’;

  if(map[r-1][c-1] == ‘@’)
    DFS(r-1, c-1);
  if(map[r-1][c] == ‘@’)
    DFS(r-1, c);
  if(map[r-1][c+1] == ‘@’)
    DFS(r-1, c+1);
  if(map[r][c+1] == ‘@’)
    DFS(r, c+1);
  if(map[r+1][c+1] == ‘@’)
    DFS(r+1, c+1);
  if(map[r+1][c] == ‘@’)
    DFS(r+1, c);
  if(map[r+1][c-1] == ‘@’)
    DFS(r+1, c-1);
  if(map[r][c-1] == ‘@’)
    DFS(r, c-1);                                                                                                                                                                                                                                      
}
int main()
{
  int m, n, num;
  scanf(“%d %d", &m, &n);
  while(m!=0)
  {
    for(int i=1; i<=m; i++)
      scanf(“%s", map[i]+1);
    for(int i=0; i<=n+1; i++)
      map[0][i] = map[m+1][i] = ‘*’;
    for(int i=0; i<=m+1; i++)
      map[i][0] = map[i][n+1] = ‘*’;

    num = 0;
    for(int i=1; i<=m; i++)
      for(int j=1; j<=n; j++)
        if(map[i][j] == ‘@’) {
          num++;
          DFS(i, j);
        }                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    printf(“%d\n", num);
    scanf(“%d %d", &m, &n);
  }
  return 0;
}


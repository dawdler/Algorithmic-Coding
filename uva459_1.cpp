#include <iostream>
#include <sstream>
#include <utility>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <functional>
#include <algorithm>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <list>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long   LL;
 
bool G[300][300], vis[300];
 
void dfs(int x) {
  if(vis[x]) return;
  vis[x] = true;
  for(char i='A'; i<='Z' ;i++)
    if(G[x][i])
      dfs(i);
}
 
int main() {
  int casos;
  string cad;
  char N;
  cin >> casos >> cad;
  for(int i=0; i<casos ;i++) {
    memset(vis, 0, sizeof(vis));
    memset(G, 0, sizeof(G));
    int r = 0;
    if(i) printf("\n");
    N = cad[0];
    while(cin>>cad && cad.size() != 1)
      G[ cad[0] ][ cad[1] ] = G[ cad[1] ][ cad[0] ] = true;
    for(char i='A'; i<=N ;i++) {
      if(vis[i]) continue;
      dfs(i);
      r++;
    }
    printf("%d\n", r);
  }
}

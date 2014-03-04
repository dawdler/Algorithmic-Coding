#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#define FOR(i,n) for(int i=0;i<n;++i) 
#define MAX 25
using namespace std;

char grid[MAX][MAX];
bool visited[MAX][MAX];
int kx,ky;
int r,c;

int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};

int flood(int x,int y,char land) { 
if(!visited[x][y])
	return 0;

visited[x][y]=true;
int cnt=1;
 for (int i = 0; i < 4; ++i) {
        int nx = x + dx[i];
        int ny = (y + dy[i] + c) % c;
        if (nx >= 0 && nx <r && grid[nx][ny] == land && !visited[nx][ny])
            cnt += flood(nx, ny, land);
    }
    return cnt;
}



int main() { 
while(cin>>r>>c) { 
FOR(i,r) FOR(j,c) cin>>grid[i][j];
memset(visited,false,sizeof visited);
cin>>kx>>ky;
char land=grid[kx][ky];
flood(kx,ky,land);
int res=0;
FOR(i,r) { 
FOR(j,c) { 
if(grid[i][j]==land && !visited[i][j])
res=max(res,flood(i,j,land));

}
}
cout<<res<<endl;
}

return 0;
}

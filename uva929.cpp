#include<iostream>
#include<queue>
#include<vector>
#include<cstring>
#include<functional>
#define pii pair< int, int >
#define piii pair< int, pii >

using namespace std;

int n,m;
priority_queue<piii,vector < piii >, greater < piii > >Q;	
int dx[]={0,0,1,-1};
int dy[]={-1,1,0,0};

bool bound(int x,int y) { 
	return x>=0 && x<n && y>=0 && y<m;
		}

int main() { 
	int t;
	int maze[1001][1001];
	int dist[1001][1001];
cin>>t;
	while(t--) { 
	
	cin>>n>>m;
	for(int i=0;i<n;++i)
	for(int j=0;j<m;++j) cin>>maze[i][j];
	memset(dist,1000000,sizeof dist);
	
	dist[0][0]=maze[0][0];
	Q.push(make_pair(maze[0][0],pii(0,0)));
	while(!Q.empty()) { 
	int d=Q.top().first;
	pii u=Q.top().second;
	Q.pop();
	if(dist[u.first][u.second]==d) { 
	for(int i=0;i<4;++i) { 
	int nx,ny;
	nx=u.first+dx[i];
	ny=u.second+dy[i];
	if(bound(nx,ny)) { 
	if(dist[u.first][u.second]+maze[nx][ny]<dist[nx][ny]) { 
	dist[nx][ny]=dist[u.first][u.second]+maze[nx][ny];
	Q.push(make_pair(dist[nx][ny],pii(nx,ny)));

	
	}
	
	}	
	
	}
	
	}
	
	
	}

      cout<<dist[n-1][m-1]<<endl;
	}
	
	return 0;
	}

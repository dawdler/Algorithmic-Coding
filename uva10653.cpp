#include<iostream>
#include<vector>
#include<queue>
#include<cstring>
#define pii pair< int , int>

using namespace std;

int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int r,c;

bool valid(int x,int y) { 
	if(x>=0 && y>=0 && x<=r && y<=c ) return true;
	return false; 
	
	
	}
struct P { 
	int i,j;
	P(int I,int J) { i=I,j=J; }
};
	
	


int main() { 
	
	
	while(1) { 
cin>>r>>c;
	if(r==0 && c==0) break;
	int grid[r+1][c+1];
	int dist[r+1][c+1];
	memset(grid,0, sizeof grid);
	memset(dist,0,sizeof dist);	
	int no_r;
	cin>>no_r;
	for(int i=0;i<no_r;++i) { 	
	int row;
	cin>>row;
	int no_bombs;
	cin>>no_bombs;
	int col;
	for(int j=0;j<no_bombs;++j) { 
	cin>>col;
	grid[row][col]=1;
	}
	
	}
	//receive start and destination 
	int sx,sy,dx1,dy1;
	cin>>sx>>sy>>dx1>>dy1;
//	cout<<"I m here"<<endl;
/*	for(int a=0;a<r;++a) { 
	for(int b=0;b<c;++b) cout<<grid[a][b]<<" ";
	cout<<endl;
 }*/
	dist[sx][sy]=0;
	queue<pii> Q;
	Q.push(pii(sx,sy));
while(!Q.empty()) { 
	pii node=Q.front();
 		Q.pop();
	for(int k=0;k<4;++k) { 
		int pos_x=node.first + dx[k];
		int pos_y=node.second+dy[k];
		if(valid(pos_x,pos_y) && grid[pos_x][pos_y]!=1) { 
		grid[pos_x][pos_y]=1;
	Q.push(pii(pos_x,pos_y));
	dist[pos_x][pos_y]=dist[node.first][node.second]+1;
		}
		}
		}
//	cout<<"I m here"<<endl;
		cout<<dist[dx1][dy1]<<endl;
		}
	}

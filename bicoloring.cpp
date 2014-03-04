#include <iostream>
#include <string>
#include <queue>
#define MAX 205
#define B 1
#define G 2
#define NO 0
using namespace std;
int graph[MAX][MAX];
int color[MAX];
bool colorable;
int n,l;
//colorable=true;

void bfs(int start) {
int i,u;
colorable=true;
for(i=0;i<n;++i)  color[i]=NO;
queue<int >Q;
Q.push(start);
while(!Q.empty()) {
		u=Q.front();
		Q.pop();
		color[u]=B;
	for(i=0;i<n;++i) {	
				if(graph[u][i]==1 && color[i]==NO) {
			//color the adjacent in opposite 
			Q.push(i);
			if(color[u]==B) color[i]=G;
			else color[i]=B; 					}
			if(graph[u][i]==1 && color[i]!=NO) {
		if(color[u]==B && color[i]==B){
				 colorable=false;break;  }
			if(color[u]==G && color[i]==G) { colorable=false;break; }
			
}

}
}
}


int main()
{


int i,j,a,b;

while(cin>>n) {
		if(n==0) break;
for(i=0;i<n;++i) {//init the graph with 0 
		for(j=0;j<n;++j) graph[i][j]=0; }

cin>>l;
for(i=0;i<l;++i) {
		cin>>a>>b;
		graph[a][b]=1;
		graph[b][a]=1;
}
bfs(0);
if(colorable) cout<<"BICOLORABLE."<<endl;
else cout<<"NOT BICOLORABLE."<<endl;
}

return 0;
}


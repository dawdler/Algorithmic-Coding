#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX 10010

vector<int>list[MAX];
int visited[MAX]={0},dist[MAX]={0};

void bfs(int source,int n) {
		visited[source]=1;
		dist[source]=n;
		for(int u=0;u<list[source].size();u++) 
			if(!visited[list[source][u]])
				bfs(list[source][u],n+1);		
		}
int main()
{
int n,a,b,node;
cin>>n;
	for(int i=0;i<n-1;++i) {
		cin>>a>>b;
		list[a-1].push_back(b-1);
		list[b-1].push_back(a-1);
}
dist[0]=0;
bfs(0,0);
node=0;
	for(int i=0;i<n;i++) 
		if(dist[i]>dist[node]) node=i;
memset(visited,0,sizeof(visited));
bfs(node,0);
sort(dist,dist+n);
cout<<dist[n-1]<<endl;
return 0;
}



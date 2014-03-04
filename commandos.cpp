#include<iostream>
#include<cstdio>
#define MAX 128
#define FOR(i,n) for(int i=0;i<n;++i)
using namespace std;
const int INF=0x3f3f3f3f;

int adj[MAX][MAX];

int max(int a, int b){ return a > b ? a : b; }
int min(int a, int b){ return a < b ? a : b; }

int main() { 
int t;
cin>>t;
FOR(test,t) { 

//initialize matrix
FOR(i,MAX) FOR(j,MAX) adj[i][j]=(i==j)?0:INF;

int build,r,s,d,a,b;
cin>>build;
cin>>r;
FOR(i,r) { 
cin>>a>>b;
adj[a][b]=adj[b][a]=1;
}
//floydd warhsall algo
FOR(k,build) FOR(i,build) FOR(j,build)
	adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);

cin>>s>>d;

//compute answer

int ans=-1;
FOR(i,build) ans=max(ans,adj[s][i]+adj[i][d]);
cout<<"Case "<<test+1<<": "<<ans<<endl;
}


return 0;
}

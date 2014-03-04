#include<iostream>
#include<climits>
#include<cstdlib>
#include<cstring>
using namespace std;
#define MAX 11

int n1;
int x[MAX],y[MAX];
int dist[MAX][MAX];
int memo[MAX][1<<MAX];
int solve(int index,int mask) {
	if(mask==(1<<(n1+1))-1)
		return dist[index][0];
	if(memo[index][mask]!=-1)
		return memo[index][mask];
	memo[index][mask]=INT_MAX;
	for(int i=0;i<=n1;++i) 
	if(i!=index && !(mask & (1<<i)))
		memo[index][mask]=min(memo[index][mask],solve(i,mask^(1<<i))+dist[index][i]);
return memo[index][mask];
}


int main()
{
int t;
//int x[MAX],y[MAX];
int m,n;
cin>>t;
while(t--) {
	cin>>m>>n;
cin>>x[0]>>y[0];
cin>>n1;
for(int i=1;i<=n1;++i) {
	cin>>x[i]>>y[i];
		}
//calculate the distance betw the beepers

for(int i=0;i<=n1;++i) {
	for(int j=0;j<=n1;++j) {

			dist[i][j]=abs(x[i]-x[j])+abs(y[i]-y[j]);
	}
	}
memset(memo,-1,sizeof((memo)));
cout<<"The shortest path has length "<<solve(0,1)<<endl;
}
return 0;
}


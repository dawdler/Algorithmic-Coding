#include<iostream>
#include<cstdlib>
#include<cstring>
#define MAX 102
#define INF1 -29999999
using namespace std;

int n,high=-8888888;
int adj[MAX][MAX];


void floyd() { 

for(int k=1;k<=high;++k)	
	for(int i=1;i<=high;++i)
	for(int j=1;j<=n;++j)
		if(adj[i][k] && adj[k][j]) {
		if(adj[i][k]+adj[k][j]<adj[i][j]) { 
		adj[i][j]=adj[i][k]+adj[k][j];
		
		}
	}


}

int main() {
int node1,node2;
int hash[MAX]={0};
 int kases=0;

while(1) { 
for(int i=1;i<=101;++i)
for(int j=1;j<=101;++j)  {
	if(i==j) adj[i][j]=0;
	else adj[i][j]=INF1;
}
cin>>node1>>node2;
	if(node1==0 && node2==0) break;
	
	if(node1>high) high=node1;
	if(node2>high) high=node2;
	 if(hash[node1]!=1) ++n;
        hash[node1]=1;
        if(hash[node2]!=1) ++n;
        hash[node2]=1;
	
	adj[node1][node2]=1;
	while(1) { 
	cin>>node1>>node2;
	if(node1==0 && node2==0) break;
	adj[node1][node2]=1;
	if(node1>high) high=node1;
        if(node2>high) high=node2;

	 if(hash[node1]!=1) ++n;
        hash[node1]=1;
        if(hash[node2]!=1) ++n;
        hash[node2]=1;
	
	}
	cout<<"Case "<<++kases<<": ";
	cout<<"N:"<<n<<" "<<"high:"<<high<<endl;
	//floyd warshall algorithm
	floyd();
	 float sum=0;
	for(int i=1;i<=high;++i)
		for(int j=1;j<=high;++j) {	
		if(i!=j && adj[i][j]!=INF1)
		sum+=float(adj[i][j]);
}
cout<<"sum:"<<sum<<endl;
		
	cout<<"average length between pages = "<<(sum/(float(n*(n-1))))<<"  clicks"<<endl;
	}
	return 0;
	}

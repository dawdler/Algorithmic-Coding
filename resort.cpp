#include<iostream>
#include<cstring>
#include<cstdlib>
#define MAX 100010
using namespace std;
int graph[MAX][0];
int objects[MAX];
int n;
int dfs(int i,int sum) {
	cout<<"i: "<<i<<"sum: "<<sum<<endl;
	int count=0,index=0;
	if(sum>n) return 0;
	if(objects[i]==1) return sum;
	if(graph[i][0]==-1|| graph[i][0]==0) return 0;
	 
		 

			return dfs(graph[i][0],sum+1);
			}
	

int main() { 
	
	int temp;
	cin>>n;
	
	memset(graph,0,sizeof graph);
	memset(graph,0,sizeof objects);
	
	for(int i=1;i<=n;++i) cin>>objects[i];
	for(int i=1;i<=n;++i) { 
	cin>>temp;
	if(graph[temp][0]==0)
	graph[temp][0]=i;
	else graph[temp][0]=-1;

	
	}
int temp1;
	int high=-111111;
	for(int i=1;i<=n;++i) { 
	if(objects[i]==1) continue;
	 temp1=dfs(i,1);
	if(temp1>high) high=temp1;
		
	
	}
	cout<<high<<endl;
	return 0;
	}

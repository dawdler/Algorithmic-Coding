#include<iostream>
#include<cstring>
using namespace std;

int main() { 
	int hash[105]={0};
	int bucket[105]={0};
	int n,m,a,b;
	int graph[105][105];
	memset(graph,0,sizeof graph);
	cin>>n>>m;
	for(int i=0;i<m;++i) { cin>>a>>b; 
	hash[a]++;
	hash[b]++;
	graph[a][b]=1;
	graph[b][a]=1;
	}
	//print the hash table
//	for(int i=1;i<=n;++i) cout<<"i:"<<i<<" "<<hash[i]<<endl;
	int group=0;
	while(1)  {
	int c=0;
	memset(bucket,0,sizeof bucket);
	bool flag=false; 
	for(int i=1;i<=n;++i) { 
	if(hash[i]==1) { 
	flag=true;
	int j;
	//find to which one node it is connected
	for(j=1;j<=n;++j) { 
	if(graph[i][j]==1) break;
	
	
	}
	
//	hash[i]--;
//	hash[j]--;
	bucket[c++]=i;
	bucket[c++]=j;
	} 
	
	}
	for(int k=0;k<c;++k) hash[bucket[k]]--;
	if(flag) ++group;
	else break;
	
	}
	cout<<group<<endl;
	
	
	}

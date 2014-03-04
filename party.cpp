#include<iostream>
#include<vector>

using namespace std;

vector<int>graph[2010];
int parent[2010];
int max1=0;
void dfs(int i,int counter) { 
max1=max(counter,max1);
for(int j=0;j<graph[i].size();++j) {  
	dfs(graph[i][j],counter+1);


}
return;
}

int main() { 
int n;
cin>>n;
for(int i=1;i<=n;++i) { 
cin>>parent[i];
 
graph[parent[i]].push_back(i);
}

for(int i=1;i<=n;++i) { 
if(parent[i]==-1)
dfs(i,1);

}
cout<<max1<<endl;



return 0;

}

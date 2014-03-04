#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<map>

#define MAX 30
using namespace std;
int visited[100][100];
char grid[100][100];
int r,c;

map<char,int>num;
bool my_comp(const book &a,const book &b)  { 
	return a.total>b.total;
	
	}

void dfs(int i,int j) { 
	if(i<0 &&j<0 && i>r &&j>c) return ;
	if(visited[i][j]!=1) {
	visited[i][j]=1;
	if(grid[i+1][j]==grid[i][j]) dfs(i+1,j);
	if(grid[i-1][j]==grid[i][j]) dfs(i-1,j);
	if(grid[i][j+1]==grid[i][j]) dfs(i,j+1);
	if(gird[i][j-1]==gird[i][j]) dfs(i,j-1)'
	
	
	}
	return ;
	}

int main() { 
	int t;
	cin>>t;
	int kase=0;
	while(t--) { 
	memset(visited,0,sizeof visited);
	cin>>r>>c;
	vector<char> language;
	//vector<char,bool>langUsed;
	int result[30]={0};
	for(int i=0;i<r;++i) 
	for(int j=0;j<c;++j) cin>>grid[i][j];
	
	for(int i=0;i<r;++i) { 
	for(int j=0;j<c;++j) { 
		if(!visited[i][j]){ 
		dfs(i,j);
		num[grid[i][j]]=0;
		//result[grid[i][j]-''a']++;
		num[grid[i][j]]++;
			}
			}
	
	}
	
	cout<<"World #"<<++kase<<endl;
	sort(res,res+MAX,my_comp);
	}
	
	
	}
	
	
	}


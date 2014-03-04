#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;
#define MAX 30
bool visited[MAX];
bool matrix[MAX][MAX];

void dfs(int x) {
	if(visited[x]) return;
	visited[x]=true;
	for(char i='A';i<='Z';++i) { 
	if(matrix[x][i])
	dfs(i);
	}
	}

int main()
{
int t;
string cad;
char N;
cin >> t >> cad;
for(int i=0;i<t;++i) { 
memset(visited,0,sizeof(visited));
memset(matrix,0,sizeof(matrix));
int r=0;
if(i) printf("\n");
N=cad[0];
while(cin>>cad && cad.size()!=1)
	matrix[cad[0]][cad[1]]=matrix[cad[1]][cad[0]]=true;

for(char i='A';i<=N;++i) { 
	if(visited[i]) continue;
	dfs(i);
	r++;
	}
printf("%d\n",r);
}
return 0;
}


#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>
#include<queue>
#include<string>
using namespace std;

int main()
{
 bool path[35][35];
int t;
string src,dest;
char a[100],b[100];

int parent[35];
int roads,query;
for(int i=0;i<35;++i) 
for(int j=0;j<35;++j) path[i][j]=false;
cin>>t;
while(t--) {
cin>>roads>>query;
for(int i=0;i<roads;++i) {
	cin>>src>>dest;
	path[src[0]-'A'][dest[0]-'A']=path[dest[0]-'A'][src[0]-'A']=true;
	}
for(int i=0;i<query;++i) {
	scanf("%s %s",a,b);
	queue<int>Q;
	
	memset(parent,-1,27);
	Q.push(a[0]-'A');
	parent[a[0]-'A']=a[0]-'A';
	
	while(!Q.empty()) {
		int popcity=Q.front();
		Q.pop();
		if(popcity == (b[0]-'A')) break;
		for(int v=0;v<26;++v) {
			if(path[popcity][v] && parent[v]==-1)	{
				parent[v]=popcity;
				Q.push(v);
		}
	}
}
//display the query result
stack<char>output;
int temp=b[0]-'A';

output.push(b[0]-'A');
while(parent[temp]!=temp) {
	output.push(parent[temp]+'A');
	temp=parent[temp];
		}

while(!output.empty()) {
		cout<<output.top();
		output.pop();
		}
cout<<"\n"<<endl;





}
}

return 0;
}



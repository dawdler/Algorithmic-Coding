#include<iostream>
#include<cstdlib>
#include<algorithm>
#include<cstdio>
#include<string>
#include<vector>
#include<cstring>
#include<queue>
#define INF_MAX 2146483647

using namespace std;

vector<int>matrix[305];
int parent[305];
int hop_count[305];


void reset() { 
	for(int i=0;i<305;++i) { 
	parent[i]=i;
	hop_count[i]=INF_MAX;
	
	}
	
}
void bfs(int s,int t) { 
	queue<int>Q;
	Q.push(s);
	hop_count[s]=0;
	while(!Q.empty()) { 
	int p=Q.front();
	Q.pop();
	if(p==t) return;
	for(int i=0;i<matrix[p].size();++i) { 
	if(hop_count[matrix[p][i]]==INF_MAX) { 
	parent[matrix[p][i]]=p;
	hop_count[matrix[p][i]]=hop_count[p]+1;
	Q.push(matrix[p][i]);	
	}
	}
	
	
	}
	
	}

void print_path (int t)
{
    vector <int> path;
    path.push_back (t);
 
    while ( parent [t] != t ) {
        t = parent [t];
        path.push_back (t);
    }
 
    reverse (path.begin (), path.end ());
 
    printf ("%d", path [0]);
 
    for ( size_t i = 1; i < path.size (); i++ ) printf (" %d", path [i]);
    printf ("\n");
}
 	
	
int main() { 
 int n;
char inp[100];
	while(scanf("%d",&n)!=EOF) { 
	getchar();
	for(int i=0;i<305;i++) matrix[i].clear();
	for(int i=0;i<n;++i) { 
	gets(inp);
    char *pch;
	pch=strtok(inp,"-,");
	int id=atoi(pch);
	pch=strtok(NULL,"-,");
	while(pch!=NULL) { 
	int sees=atoi(pch);
	matrix[id].push_back(sees);
	pch=strtok(NULL,"-,");
	}
	
	
	}
	int Q,start,dest;
	cin>>Q;
	printf("-----\n");
	for(int i=0;i<Q;++i) { 
	reset();
	cin>>start>>dest;
	bfs(start,dest);
if(hop_count[dest]==INF_MAX) printf("connection impossible\n");
	else print_path(dest);
	}
	
	
	}
return 0;

}

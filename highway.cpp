
#include<iostream>
#include<queue>
#include<ios>
#include<vector>
#include<functional>
#define INF 9999999


#define pii pair< int, int>

using namespace std;


class compare
	{
	    public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )

	    {
	        return p1.second > p2.second;
	    }
	};
int main() { 
	int t;
	cin>>t;
	while(t--) { 
	int n,m,start,end;
cin>>n>>m>>start>>end;
	// vector<pair<int,int> >graph[n+1];
	vector<pii>graph[n+1];
        int dist[n+1];
       // priority_queue<pair<int,int>,vector<pair<int,int> >, greater< pair<int,int> > Q; 
priority_queue<pii,vector<pii>, greater< pii > >Q;
	int a,b,weight;
	for(int i=0;i<m;++i) { 
		cin>>a>>b>>weight;
	graph[a].push_back(pair<int,int> (b,weight));
	graph[b].push_back(pair<int,int> (a,weight));
	}
for(int i=0;i<=n;++i) {
        dist[i]=INF;
}


dist[start]=0;
		

Q.push(pair<int,int> (start,dist[start]));
	while(!Q.empty()) { 	
	int current=Q.top().first;
	Q.pop();
	for(int i=0;i<graph[current].size();++i) { 
	int neigh=graph[current][i].first;
	int weigh=graph[current][i].second;
	if(dist[neigh]>dist[current]+weigh) { 
	dist[neigh]=dist[current]+weigh;
	Q.push(pair<int,int> (neigh,dist[neigh]));
		
	
}
	}
	
	}
	if(dist[end]!=INF) cout<<dist[end]<<endl;
	else cout<<"NONE"<<endl;
	}
	return 0;
	}

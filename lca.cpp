#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>

using namespace std;
#define MAX 2001
int parent[MAX];
bool visited[MAX];


inline int fastinput()
    {
    int input=0;
    char c=0;
    while(c<33) { c=getchar_unlocked(); }
    while(c>33)
    {
    input=input*10+c-'0';
            c=getchar_unlocked();
    }
    return input;
    }




int main()
{
int root=1; 
int t,n,n1;
int node;
t=fastinput();
for(int i=0;i<t;++i) { 
int done=0;
//printf("Case %d:\n",i+1);
n=fastinput();

memset(parent,-1,sizeof(parent));
memset(visited,false,sizeof(visited));
for(int j=1;j<=n;++j) { 
n1=fastinput();
parent[1]=0;
for(int k=1;k<=n1;++k) { 
node=fastinput();
	parent[node]=j;
	}
	}
int Q,a,b;

Q=fastinput();

for(int j=0;j<Q;++j) { 
memset(visited,false,sizeof(visited));
a=fastinput();
b=fastinput();
if(a==root || b==root) { 
	 if(!done) { printf("Case %d:\n",i+1); done=1;  }
        cout<<root<<endl;

	continue;

	}
//printf("Case %d\n:",i+1);
while(a!=0) { 
	visited[a]=true;
	a=parent[a];
//	cout<<"nodes:"<<a<<endl;
	} 
 
while(b!=0) { 

	if(visited[b]) { 
	if(!done) { printf("Case %d:\n",i+1); done=1;  }
	cout<<b<<endl;
	break;	
	}
b=parent[b];
		
	}

	}
		
	
	
	}	
	
}







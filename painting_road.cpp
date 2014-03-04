#include<iostream>
#include<cstring>
#define SZ 1000

using namespace std;

int a[SZ][SZ];

int main() { 

int t,l,k;

cin>>t;
int b[SZ];
int e[SZ];
int cost[SZ];
while(t--) { 


cin>>l>>k;
memset(b,0,sizeof b);
memset(e,0,sizeof e);
memset(cost,0,sizeof cost);

//receive the input
for(int i=1;i<=k;++i) { 
		cin>>b[i]>>e[i]>>cost[i];
		}	
int i,j;
//dynamic programming solution 
for(j=1;j<=l;++j) { 
	for(i=1;i<=k;++i) { 
		if((b[i]<j) && (j<=e[i])) { 
			int x=a[i-1][j];
			if(x>0)
 			a[i][j]=min(a[i-1][j],a[k][b[i]]+cost[i]);  
                        else a[i][j]=a[k][b[i]]+cost[i];

}

		else  { a[i][j]=a[i-1][j];  }
	
		}

if(!a[k][j]) break;
	}

if(a[k][l]) cout<<a[k][l]<<endl;
else cout<<"-1"<<endl;

memset(a,0,sizeof a);
}


return 0;
}

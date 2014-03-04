#include<iostream>

using namespace std;
char graph[52][52];
int mark[52][52];
int res=0;

int h,w;
int p[]={-1,-1,-1,0,0,1,1,1};
int q[]={-1,0,1,-1,1,-1,0,1};

int max(int i,int j) { 
return (i>j) ? i:j ;


}
void dfs(int x,int y,int cnt) { 

//res=max(res,cnt);
if(cnt>res) res=cnt;
for(int i=0;i<8;++i) { 
if(x+p[i]>=0 && x+p[i]<h && y+q[i]>=0 && y+q[i]<w && mark[x+p[i]][y+q[i]]==0) {
if(graph[x+p[i]][y+q[i]]==graph[x][y]+1){
mark[x+p[i]][y+q[i]]=1;
dfs(x+p[i],y+q[i],cnt+1);


 
}
}

}

}

int main() { 
int t=0;

while(cin>>h && h>0 && cin>>w && w>0) {
res=0;
for(int i=0;i<h;++i)
{ 
for(int j=0;j<w;++j) { 
		
		cin>>graph[i][j];
		mark[i][j]=0;
		}


}

for(int i=0;i<h;++i) { 
	for(int j=0;j<w;++j) { 
		if(graph[i][j]=='A') { 
                         mark[i][j]=1;
			dfs(i,j,1);
			
			}

		}

	}

cout<<"Case "<<++t<<": "<<res<<endl;
}
return 0;
}


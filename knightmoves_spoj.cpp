#include<iostream>#include<queue>#include<cstring>#include<algorithm>
using namespace std;
struct Z{int x;	int y;};
string initial,final;int movesx[]={-2,-1,1,2,2,1,-1,-2};int movesy[]={-1,-2,-2,-1,1,2,2,1};int cost[10][10];bool mark[10][10];
void bfs(int intx,int inty,int finx,int finy) {int X,Y;queue<Z>Q;Z z;
z.x=intx;z.y=inty;Q.push(z);cost[intx][inty]=0;memset(mark,false,sizeof mark);Z r;while(!Q.empty()) {z=Q.front();Q.pop();//if reached the final position
if(z.x==finx && z.y==finy) {cout<<cost[z.x][z.y]<<endl;return;}
for(int i=0;i<8;i++){X=z.x+movesx[i];Y=z.y+movesy[i];if(X>=1 && X<=8 && Y>=1 && Y<=8 && !mark[X][Y]) {mark[X][Y]=true;cost[X][Y]=cost[z.x][z.y]+1;
r.x=X;r.y=Y;Q.push(r);}	}}}
	int main(){int intx,inty,finx,finy;int test;cin>>test;while(test--) {while(cin>>initial>>final) {intx=initial[0]-96;inty=initial[1]-'0';
finx=final[0]-96;finy=final[1]-'0';bfs(intx,inty,finx,finy);}}return 0;}


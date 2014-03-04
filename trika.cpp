#include<iostream>
#include<cstring>

using namespace std;


int main() { 

int n,m,x,y;

cin>>n>>m;
int P[n+1][m+1];
cin>>x>>y;

for(int i=1;i<=n;++i)
for(int j=1;j<=m;++j) cin>>P[i][j];

//start from the (x,y) position

for(int i=x+1;i<=n;++i)
P[i][y]=P[i-1][y]-P[i][y];

for(int i=y+1;i<=m;++i)
P[x][i]=P[x][i-1]-P[x][i];

for(int i=x+1;i<=n;++i) { 
for(int j=y+1;j<=m;++j) { 
	    P[i][j]=max(P[i][j-1],P[i-1][j])-P[i][j];
                 // cout<<dp[i][j-1]<<" "<<dp[i-1][j]<<endl;
			}



}
if(P[n][m]>=0)
cout<<"Y "<<P[n][m]<<"\n";
else 
cout<<"N\n";

return 0;

}

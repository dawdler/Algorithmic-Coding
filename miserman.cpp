#include<iostream>
#include<cstring>
using namespace std;

int main() { 
int dp[101][101]={0};
int n,m;
cin>>n>>m;
for(int i=0;i<=n;++i)
	dp[i][m+1]=dp[i][0]=1000000;



for(int i=1;i<=n;++i) { 
for(int j=1;j<=m;++j) { 
	cin>>dp[i][j];

}
}

for(int i=1;i<=n;++i) { 
for(int j=1;j<=m;++j) { 
dp[i][j]+=min(dp[i-1][j],min(dp[i-1][j+1],dp[i-1][j-1]));
}
}
int min=1000000;

for(int i=1;i<=m;++i)
	if(dp[n][i]<min) 
		min=dp[n][i];

cout<<min<<endl;
return 0;
}

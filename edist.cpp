#include<iostream>
#include<cstdlib>
#include<string>
#include<cstring>>
using namespace std;

#define MAX 2001
int dp[MAX][MAX];
int main() { 
int t;
int temp1,temp2,temp;
cin>>t;

string A,B;
while(t--) { 
	memset(dp,0,sizeof(dp));
	cin>>A;
	cin>>B;
	for(int i=1;i<=A.length();++i) dp[i][0]=i;
	for(int j=1;j<=B.length();++j) dp[0][j]=j;

	for(int i=1;i<=A.length();++i) { 
	for(int j=1;j<=B.length();++j) { 
	int temp=(A[i-1]==B[j-1])?0:1;
	temp2=dp[i-1][j-1]+temp;
	temp1=min(dp[i-1][j]+1,dp[i][j-1]+1);
	dp[i][j]=min(temp1,temp2);
	}
	}
	cout<<dp[A.length()][B.length()]<<endl;
	}
return 0;

}

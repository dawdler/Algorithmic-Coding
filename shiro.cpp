#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

#define MAX 10010

int main()
{
int t,n;
float temp;
int sum;
int flag[102];
float p[102];
float dp[102][MAX];
cin>>t;
while(t--) {
		sum=0;
	cin>>n;
	for(int i=1;i<=n;++i) {
		
		cin>>flag[i];
		sum+=flag[i];		
}
	for(int i=1;i<=n;++i) {
		cin>>temp;
		p[i]=temp/100;
		}
		//for(int i=1;i<=n;++i) { cout<<p[i]<<" "; }
	//memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++)
	for(int j=0;j<=sum;j++)
	dp[i][j]=0.0;
	//initialization 
	dp[1][0]=1-p[1];
	dp[1][flag[1]]=p[1];
	for(int i=2;i<=n;++i) {
		for(int j=0;j<=sum;j++) {
			if(dp[i-1][j]!=0.0) {
				dp[i][j]+=dp[i-1][j]*(1-p[i]);
				dp[i][j+flag[i]]+=dp[i-1][j]*p[i];
		}
	}
	}

/*for(int i=0;i<=n;++i) {
	for(int j=0;j<=sum;++j) {
		cout<<dp[i][j]<<" ";
		}
cout<<endl;
	}

*/
float ans=0;
for(int i=sum-sum/2;i<=sum;++i) {
		ans+=dp[n][i];
		}
	printf("%8f\n",ans);
	}
return 0;
}


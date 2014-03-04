#include<iostream>
using namespace std;
int list[10001];
int dp[10001][105];
int k,n;
int stop=0;
void way(int result,int i) {
	if(i==n+1){
		/*if(result<0) {
			int temp=-result;
			if(temp%k==0) {
				return 1;
}
			else return 0;
			
		}
		else {*/
		//	cout<<"result:"<<result<<endl;
		//if(result==0) return 0;
			if(result%k==0) {
				//return 1; 
			stop=1;
			}
	
			//else return 0;
			
	//}
}
/*if(dp[i][result%k]!=-1) return dp[i][result%k];
dp[i][result%k]=max(way(result+list[i],i+1),way(result-list[i],i+1));
	return dp[i][result%k];*/
if(dp[i][result%k]!=-1) return;
dp[i][result%k]=1;
way(result+list[i],i+1);
if(stop==1) return ;
way(result-list[i],i+1);
if(stop==1) return;
}



int main()
{
int t;
//for(int i=0;i<10001;++i) 
//		for(int j=0;j<105;++j) dp[i][j]=-1;
cin>>t;
while(t--) {
stop=0;
	for(int i=0;i<10001;++i)
                for(int j=0;j<105;++j) dp[i][j]=-1;

		cin>>n>>k;
		for(int i=1;i<=n;++i) cin>>list[i];
way(list[1],2);
if(stop==0) {
		cout<<"Not Divisible"<<endl;
		}
	else cout<<"Divisible"<<endl;
	}
return 0;
}
		

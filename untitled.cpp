#include<iostream>
#include<cmath>

using namespace std;

int main() {
int wh[1002][2],dp[1002][2];
int n,a,b,i=0;
cin>>n;
for(int i=0;i<n;++i){
cin>>wh[i][0]>>wh[i][1];

if(wh[i][0]>wh[i][1]) {
	int temp=wh[i][0];
	wh[i][0]=wh[i][1]
	wh[i][1]=temp;
	}

}
dp[0][0]=wh[0][0];
dp[0][1]=wh[0][1];
//filling the dp array 
for(int i=1;i<n;++i ){ 


dp[i][0]=max(dp[i-1][0]+wh[i][0]+abs(wh[i][1]-wh[i-1][1]),dp[i-1][1]+wh[i][0]+abs(wh[i][1]-wh[i-1][0]));

dp[i][1] = max(dp[i-1][0]+wh[i][1]+abs(wh[i][0]-wh[i-1][1]),dp[i-1][1]+wh[i][1]+abs(wh[i][0]-wh[i-1][0]));
        }
 
        cout << max(dp[n-1][0],dp[n-1][1]) << endl;



	return 0;
}

#include<cstdio>
using namespace std;
inline int min(int a, int b) {
		return a<b ? a : b;
 }
int main()
{
int arr[100000][3];
int n,i,j;
int cs=1;
//memset(arr,-1,sizeof(arr));
while(scanf("%d",&n)==1 && n){
  	for(i=0;i<n;++i) {
			for(j=0;j<3;++j) {
				scanf("%d",&arr[i][j]);
			}
	}

//initial conditions

arr[0][2]+=arr[0][1];
arr[1][0]+=arr[0][1];
arr[1][1]+=min(arr[1][0],min(arr[0][1],arr[0][2]));
arr[1][2]+=min(arr[1][1],min(arr[0][1],arr[0][2]));
//compute other values using previous calculated values

for(i=2;i<n;++i) {
		  arr[i][0]+=min(arr[i-1][0],arr[i-1][1]);
                  arr[i][1]+=min(min(arr[i][0],arr[i-1][1]),min(arr[i-1][0],arr[i-1][2]));
                 arr[i][2]+=min(arr[i][1],min(arr[i-1][1],arr[i-1][2]));
                
}
printf("%d. %d\n",cs++,arr[n-1][1]);
}
return 0;
}


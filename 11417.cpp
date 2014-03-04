nclude <cstdio>
#include <algorithm>

using namespace std;

long long ans[210000];
int gcd[501][501];
//Time : 0.016

int main()
{
    for(int i = 2; i < 500; i++){
        for(int j = i; j <= 500; j += i){
            gcd[i][j] = i;
        }
    }
 ans[0] = 0;
 for (int n = 1; n <= 500; n++) {
  ans[n] = ans[n-1];
  for (int i = 1; i < n; i++)
   ans[n] += (!gcd[i][n])?gcd[i][n] = __gcd(i,n) : gcd[i][n];

 }

 int N;
    while(scanf("%d",&N) && N)
        printf("%lld\n",ans[N]);
}

 

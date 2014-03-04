

#include <cstdio>
#include <cstring>
#define MAX_N 15
//#define m 1000000000
typedef unsigned long long ll;

struct Matrix { ll mat[MAX_N][MAX_N]; };

Matrix matMult(const Matrix& a, const Matrix& b, ll d, ll mod) {
	Matrix ans; ll k;
	for(int i = 0; i < d; ++i)
		for(int j = 0; j < d; ++j)
			for(ans.mat[i][j] = k = 0; k < d; ans.mat[i][j]%=mod,++k)
				ans.mat[i][j]+=((a.mat[i][k]%mod)*(b.mat[k][j]%mod))%mod;
				
	return ans;
}

Matrix fastExp(Matrix base, ll p, ll d,ll mod) {
	Matrix ans;
	for(int i = 0; i < d; ++i)
		for(int j = 0; j < d; ++j)
			ans.mat[i][j] = (i == j);
			
	while(p) {
		if(p & 1) ans = matMult(ans,base,d,mod);
		base = matMult(base,base,d,mod);
		p >>= 1;
	}
	return ans;
}

ll F[MAX_N];
ll ans[MAX_N];
int main () {
	ll d, n,m1,m,sum1=0,sum2=0;
	


int t;
	Matrix M;
	scanf("%d",&t);
	while(t--) {
	memset(ans, 0, MAX_N);		//ans[MAX_N]={0};
	
sum1=0;sum2=0;
 scanf("%lld",&d); 		
		memset(M.mat,0,sizeof M.mat);
for(int i = d-1; i >= 0; --i) scanf("%lld",&F[i]);
F[0]=0;		
for(int i = 0; i < d; ++i) scanf("%lld",&M.mat[0][i]);
		for(int i = 1; i < d; ++i) 	M.mat[i][i-1] = 1;
		
		scanf("%lld %lld %lld",&m1,&n,&m);
			//printf("m1:%lld d:%lld\n",m1,d);
		if(m1 >= d) {
			//printf("I m here\n");
			memset(M.mat,0,sizeof M.mat);
			M = fastExp(M,m1-d-1,d,m);
			ll k;
			
			for(int i = 0; i < d; ++i)
				for(ans[i] = k = 0; k < d; ans[i]%= m, ++k) {
					ans[i]+=(M.mat[i][k]%m)*(F[k]%m)%m;
			}
			//printf("%lld\n",ans[0]);
				sum1=ans[0];
				//printf("Sum1:%lld\n",sum1);
				
  
	}
	else {
			sum1=F[d-m1]; }
			memset(ans, 0, MAX_N);
//ans[MAX_N]={0};
		memset(M.mat,0,sizeof M.mat);
		M = fastExp(M,n-d,d,m);
			ll k;
			
			for(int i = 0; i < d; ++i)
				for(ans[i] = k = 0; k < d; ans[i]%= m, ++k) {
					ans[i]+=(M.mat[i][k]%m)*(F[k]%m)%m;
			}


			sum2=ans[0];
			//printf("Sum2:%lld\n",sum2);
 /*else {
			//printf("%lld\n",F[d-m1]); 
				sum+=F[d-m1];
		}*/
		//printf("Result%lld\n",sum2-sum1);	
}
	
	return 0;
}

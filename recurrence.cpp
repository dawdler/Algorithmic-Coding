//The Beauty of Linear Algebra

#include <cstdio>
#include <cstring>
#define MAX_N 15

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
	ll d, n,m;
	int i,j;
	while(scanf("%lld %lld %lld",&d,&n,&m) && d) {
		Matrix M;
		memset(M.mat,0,sizeof M.mat);
		for(i = 0; i < d; ++i) scanf("%lld",&M.mat[0][i]);
	
		for(i = 1; i < d; ++i) 	M.mat[i][i-1] = 1;
		for(i = d-1; i >= 0; --i) scanf("%lld",&F[i]);
//displaying initial matrix 
		printf("initial matrx is:\n");
			for(i=0;i<d;++i) {
					for(j=0;j<d;++j) {
								printf("%lld ",M.mat[i][j]);
				}
	printf("\n");
}
		if(n > d) {
			M = fastExp(M,n-d,d,m);
			ll k;
			
			for(i = 0; i < d; ++i)
				for(ans[i] = k = 0; k < d; ans[i]%= m, ++k) {
					ans[i]+=(M.mat[i][k]%m)*(F[k]%m)%m;
			}
printf("Final matrix is:\n");			for(i=0;i<d;++i) {
					for(j=0;j<d;++j) {
								printf("%lld ",M.mat[i][j]);
				}
	printf("\n");
}
printf("Ans is:\n");
			printf("%lld\n",ans[0]);
		} else {
			printf("%lld\n",F[d-n]);
		}
	}
	return 0;
}

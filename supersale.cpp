#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 1001
#define MAX1 40
int P[MAX],W[MAX];
int m[MAX][MAX1];
int main() {
	int t,N,sum,g,weight,a,b;
	//cout<<m[100][100]<<endl;
	scanf("%d",&t);
	while(t--) {
			sum=0;
		scanf("%d",&N);//number of objects
		for(int i=1;i<=N;++i) {
				scanf("%d%d",&P[i],&W[i]);//price and weight of each object
		}
scanf("%d",&g);//no of people in the family
for(int i=1;i<=g;++i) {
		scanf("%d",&weight);

for(a=0;a<=N;++a) 
		for(b=0;b<MAX1;++b) m[a][b]=0;
//implementation of knapsack algorithm
		for(int j=1;j<=N;++j) {
			for(int k=0;k<=weight;++k) {
				if(k>=W[j]) {
					m[j][k]=max(m[j-1][k-W[j]]+P[j],m[j-1][k]); }
	else m[j][k]=m[j-1][k];
}
}
sum+=m[N][weight];
}
cout<<sum<<endl;
}
return 0;
}


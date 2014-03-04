#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 2010
int V[MAX];
int res[MAX][MAX];
int n;
int treat(int i,int j) { //top-bottom approach
	if(res[i][j]!=-1)
		return res[i][j];
	int m;
	m=j-i+1;
	m=n-m+1;
	if(i==j)
		return m*V[i];
	res[i][j]=max(m*V[i]+treat(i+1,j),m*V[j]+treat(i,j-1));
	return res[i][j];
	}

int main()
{
for(int i=0;i<MAX;++i) 
	for(int j=0;j<MAX;++j)
		res[i][j]=-1;
int ans=0;
scanf("%d",&n);
for(int i=0;i<n;i++) {
	scanf("%d",&V[i]);
	}
ans=treat(0,n-1);
printf("%d\n",ans);
return 0;
}




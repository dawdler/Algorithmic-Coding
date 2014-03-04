#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 22

long long count(int s[],int m,int n) {
	 long long x,y;

	long long table[n+1][m];
	for(int i=0;i<=m;++i) {
		table[0][i]=1;
	}

 for (int i = 1; i < n+1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // Count of solutions including S[j]
            x = (i-s[j] >= 0)? table[i - s[j]][j]: 0;
 
            // Count of solutions excluding S[j]
            y = (j >= 1)? table[i][j-1]: 0;
 
            // total count
            table[i][j] = x + y;
        }
    }
    return table[n][m-1];
}


int main()
{
int s[21]={0};

for(int i=0;i<21;++i) {
	s[i]=(i+1)*(i+1)*(i+1);
	}
int m=sizeof(s)/sizeof(s[0]);
int n;

while(scanf("%d",&n)!=EOF) {
	cout<<count(s,m,n)<<endl;

	}
return 0;
}



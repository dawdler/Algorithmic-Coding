#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;


int f[7][7];
char a[7][7];
int n;

int backtrack(int rook) {
	int ret=rook;
for(int i=0;i<n;++i) {
	for(int j=0;j<n;++j) {
		if(f[i][j]==0) {
		for(int k=j;k>=0 && a[i][k]!='X';--k) //current row
			f[i][k]++;
		for(int k=j+1;k<n && a[i][k]!='X';++k)//current column
			f[i][k]++;
	for(int k=i-1;k>=0 && a[k][j]!='X';k--)//current column
		f[k][j]++;
	for(int k=i+1;k<n && a[k][j]!='X';++k) //current column
		f[k][j]++;
		

int val=backtrack(rook+1);
	if(val >ret) ret=val;
	
//backtrack now
 for(int k=j;k>=0 && a[i][k]!='X';--k) //current row
                        f[i][k]--;
                for(int k=j+1;k<n && a[i][k]!='X';++k)//current column
                        f[i][k]--;
        for(int k=i-1;k>=0 && a[k][j]!='X';k--)//current column
                f[k][j]--;
        for(int k=i+1;k<n && a[k][j]!='X';++k) //current column
                f[k][j]--;
}
}
}
return ret;
}


int main()
{
while(1) {
		scanf("%d",&n);
		if(n==0) break;
	for(int i=0;i<n;++i) scanf("%s",a[i]);
memset(f,0,sizeof(f));	
for(int i=0;i<n;++i) {
	for(int j=0;j<n;++j) {
		if(a[i][j]=='X') f[i][j]=1000000;
	}
	}
printf("%d\n",backtrack(0));
	}
return 0;
}


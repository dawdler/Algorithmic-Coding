#include<iostream>
#include<cstdio>
using namespace std;
char a[15][15];
int main()
{
int m,n;
scanf("%d%d",&m,&n);

for(int i=1;i<=m;++i) {
	for(int j=1;j<=n;++j) {
			scanf(" %c",&a[i][j]);
		}
	}
int count=0;
for(int i=1;i<=m;++i) {
	for(int j=1;j<=n;++j) {
			if(a[i][j]=='W' && (a[i-1][j]=='P' || a[i+1][j]=='P'||a[i][j-1]=='P'||a[i][j+1]=='P')) ++count;
}
}
printf("%d\n",count);
return 0;
}


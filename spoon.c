#include<stdio.h>
#define MAX 100
int find_in_row(int,int);
int find_in_col(int,int);
int matrix[MAX][MAX];

int main() {
	int i,j,k,count=0;
int flag=0;
int n,c,t;
scanf("%d",&t);
	for(i=0;i<t;++i) {
		scanf("%d%d",&n,&c);
		for(j=0;j<n;++j) {
			for(k=0;k<c;++k) {
				scanf("%c",matrix[j][k]);
		}
	}

//search in the rows n columns
f=find_in_row(n,c);
f1=find_in_col(n,c);

if((f==1)||(f1==1)) printf("There is a spoon!\n");
else printf("There is indeed no spoon!\n");
}
return 0;
}

int find_in_row(int n ,int c) {
		int i,j,k,count=0;

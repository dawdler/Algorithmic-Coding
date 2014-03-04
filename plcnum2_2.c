#include<stdio.h>
#define MAX 101
int main()
{

int n,i,j;
int odd;
int mat[MAX][MAX]={0};
int value=1;
scanf("%d",&n);

odd=n/2+1;
//printf("Odd:%d\n",odd);
for(i=0;i<n;++i) {
		//if(i==odd) { printf("YEs\n");continue;  }
		for(j=0;j<n;++j) {
			if(mat[i][j]==0) {
			mat[i][j]=value++;
			mat[n-1-i][n-1-j]=value++;		
			}
	}
}
if(n%2!=0) {
mat[odd-1][odd-1]=mat[odd-1][odd-1]-1; }
/*value=(n-1)*n+1;
for(j=n-1;j--;j>0) {
		printf("J:%d\n",j);
		printf("I m here\n");
 			if(mat[odd][j]==0) {
			printf("value:%d\n",value);
		mat[odd][j]=value++;  }   }


*/
for(i=0;i<n;++i) {
		for(j=0;j<n;++j) {	
				printf("%d ",mat[i][j]);
                 }
printf("\n");
}
return 0;
}


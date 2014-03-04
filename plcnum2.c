#include<stdio.h>

int main()
{
int N;
int i=0,j=0;
int matrix[100][100];
int count=0,value=1;

scanf("%d",&N);
int up=1,down=N,right=N,left=0;

count=N*N;

while(value<=count) {
		while(j<right) {	matrix[i][j++]=value++; }
right--;
while(i<down) {
		matrix[i++][j]=value++; }
down--;
while(j>=left) {
		matrix[i][j--]=value++; }
	left++;
while(i>=up) {
		matrix[i--][j]=value++;
}
up++;
}
//print the spiral matrix
for(i=0;i<N;++i) {
		for(j=0;j<N;++j) {
				printf("%d ",matrix[i][j]);
	}	
printf("\n");
}

return 0;
}


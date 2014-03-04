#include<stdio.h>
#define MAX 110
int main()
{
int t,n,m,j,i,temp,temp1;
int list1[MAX][MAX]={0};
int list2[MAX][MAX]={0};
int a;
j=1;
scanf("%d",&t);
for(a=0;a<t;++a) {
		
		scanf("%d %d",&n,&m);
		for(i=1;i<=n;++i) {
		j=1;
			scanf("%d",&temp);
			scanf("%d",&temp1);
							
while(1) { 
		if(list1[temp1][j]!=0) ++j;
		else break;
}
list1[temp1][j]=temp;
}

for(i=1;i<=m;++i) {
		j=1;
			scanf("%d",&temp);
			scanf("%d",&temp1);
							
while(1) { 
		if(list2[temp1][j]!=0) ++j;
		else break;
}
printf("I m here\n");
list2[temp1][j]=temp;
}
//display the formed matrix
for(i=1;i<=n;++i) {
		for(j=1;j<=5;++j) {
				printf("%d ",list1[i][j]);
		}
printf("\n");
}
//main logic starts here



}
return 0;
}


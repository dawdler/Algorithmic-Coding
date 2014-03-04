#include<stdio.h>
int main()
{
int t;
int count=0;
int i,k,j;
int m,n;
int temp=0;
int list[1000][1000]={0};
scanf("%d",&t);
for(i=0;i<t;++i) {
	count=0;
list[110][110]=NULL;
	scanf("%d%d",&m,&n);
		for(j=0;j<m;++j) {
				for(k=0;k<n;++k) {
					scanf("%d",&list[j][k]);
				}

}
for(j=0;j<m;++j) {

		for(k=0;k<n;++k) {
				if(list[j][k]==1) {
						
					if(j-1<0){    temp=0;  }
else { 
             if(list[j-1][k]!=1) list[j-1][k]=2;   }
					
	if(j+1<=m) {  if(list[j+1][k]!=1) list[j+1][k]=2;   }

//list[j+1][k]=1;    
				}
}
}
//display the matrix
/*printf("NEw matrix is:\n");
for(j=0;j<m;++j) {
				for(k=0;k<n;++k) {
						printf("%d ",list[j][k]);
			}
			printf("\n");
}
*/
for(j=0;j<m;++j) {
				for(k=0;k<n;++k) {
				if(list[j][k]==0) ++count;
}
}
printf("%d\n",count);
}
return 0;
}



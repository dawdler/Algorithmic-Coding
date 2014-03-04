#include<stdio.h>
#define MAX 100
int main()
{
int n;
int list[MAX];
int i=0,a=0,j=0,k=0;
  int sum=0,count=0;
int start=0;
int sum1=0;
scanf("%d",&n);
for(i=0;i<n;++i) scanf("%d",&list[i]);

for(i=0;i<n;++i) {
		while(j<n) {
			start=i;
			j=j+2;
			k=start;
			a=j;
			while(k<j/2) {
					sum=sum+list[++k];
					sum1=sum1+list[--a];
					printf("Sum:%d",sum);printf("Sum1:%d",sum1);
			}
		if(sum1==sum) { count=j; continue; }
	}
}
printf("%d",count);
return 0;
}


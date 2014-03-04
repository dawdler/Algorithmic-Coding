#include<stdio.h>
int max=0;
int main()
{
int T,n,num,i,j;
scanf("%d",&T);
	for(j=0;j<T;++j) {
			max=0;
			scanf("%d",&n);
			for(i=0;i<n;++i)  { 
			scanf("%d",&num);
			if(num>max) max=num;
}
printf("Case %d: %d\n",j+1,max);
}
return 0;
}



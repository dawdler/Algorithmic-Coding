#include<stdio.h>
#include<math.h>
int main() {
	int ans;
	int t,num,temp,i,j;
	scanf("%d",&t);
	for(i=0;i<t;++i) {
			scanf("%d",&num);
	ans=num-1;
	for(j=(int)sqrt(num);j>1;j--) {
		if((num%j)==0) {
				temp=num/j;
				ans=temp-j;
				break;
		}
}
	printf("% d\n",ans);
}
return 0;
}


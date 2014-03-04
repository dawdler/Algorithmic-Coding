#include<stdio.h>

int main()
{
int t;
int n,m,x,y;
scanf("%d",&t);
while(t--) {
		scanf("%d%d",&n,&m);
			if(n>=m&& (n+m)%2==0){
				x=(n+m)/2;
				y=(n-m)/2;
				printf("%d %d\n",x,y);
			}
		else printf("impossible\n");
}
return 0;
}


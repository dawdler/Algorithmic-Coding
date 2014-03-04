#include<stdio.h>
long check(long);

int main()
{
long num;
int i,t;
int res;
scanf("%d",&t);
while(t--) {
		scanf("%ld",&num);
		res=check(num+1);
		printf("%ld\n",res);
}
return 0;
}
long check(long num) {
	

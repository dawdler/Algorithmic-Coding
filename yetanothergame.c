#include<stdio.h>
int main()
{
int t,num;
scanf("%d",&t);
while(t--) {
	scanf("%d",&num);
	if(num%2==0) printf("ALICE\n");
	else printf("BOB\n");
	}
return 0;
}


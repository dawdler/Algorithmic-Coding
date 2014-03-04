#include<stdio.h>
int main()
{long long  num;
int t;
long long temp;
scanf("%d",&t);
int count=0;
long long mul=1;
int mod;
while(t--) {
	count=0;
	mul=1;
		scanf("%lld",&num);
		temp=num;
	/*do{
			++count;
			//printf("Mul:%d\n",mul);
			mul=mul*9;
		}while(mul<=num);*/
mod=num%9;
if(mod%2==0) printf("A wins\n");
else printf("B wins\n");
}
return 0;
}
	
		


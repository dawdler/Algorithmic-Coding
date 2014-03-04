#include<stdio.h>
int main()
{
int t,n,i,count=0;
scanf("%d",&t);
	while(t--) {
		count=0;
		scanf("%d",&n);
		if((n==0) || (n==1))  { printf("Bhima\n"); continue; }
while(n!=0) {++count;
		n=n/2;
		
		}

				
if(count%2==0) printf("Arjuna\n");
		else printf("Bhima\n");
}
return 0;
}

		

#include<stdio.h>
#include<cmath>
int main()
{int i,t;
int test[100];
int a=0;
long long n;
long long n1,pow1;
long long res=0;
scanf("%d",&t);
while(t--) {
		scanf("%lld",&n);
		//if(n==1) { printf("4\n"); continue; }
		if(n==2) { printf("12\n"); continue; }
		if(n==3) { printf("24\n");  continue; }
		if(n==4) { printf("108\n");continue;}
		else  { 
			//printf("N:%d\n",n);
			
n1=n-2;
//printf("n1:%d\n",n1);			
//printf("Pow:%f\n",8*pow(3,n1));
//printf("i m here%d\n",3<<n1);
		pow1=8*((long long)pow(3,n1))%1000000007;
		
		res=(4*(n+1))%1000000007+pow1;
//	printf("Res:%d\n",res);		
printf("%lld\n",res%1000000007);
//++a;
}
}
//for(i=0;i<a;++i) printf("%d\n",test[i]);

return 0;
}


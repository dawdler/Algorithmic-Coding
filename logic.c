#include<cstdio>
#include<cmath>

long long int fact(long long int n) {
	long long int i,value=1;
	for(i=2;i<=n;++i) value=value*i;
return value;
}

int main()
{
long long int n,temp,nfact;
scanf("%lld",&n);
temp=pow(2,n);
nfact=fact(n);
printf("%lld",nfact+temp-n);
return 0;
}




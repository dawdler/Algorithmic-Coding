#include<cstdio>
using namespace std;
typedef unsigned long long ull;
ull n;
int main()
{
ull i;
while(~scanf("%llu",&n)) {
i=2;	
	//if(n==0) break;
	while(i*i<=n)	{
			int cp=0,temp=0;
	if(n%i==0) {
		temp=i;
		while(n%i==0) {
			++cp;
			n/=i;
		}
	printf("%d^%d ",temp,cp);
	}
			if(n==1) break;
	}
	if(n>1) printf("%llu^1",n);
		puts(" ");
	}
return 0;
}




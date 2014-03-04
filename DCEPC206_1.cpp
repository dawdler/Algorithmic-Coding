#include<iostream>
#include<cstdio>
using namespace std;

    int phi(int n)
{
     int result = n;
     int i;
       for(i=2;i*i <= n;i++) 
       { 
         if (n % i == 0) 
         result -= result / i; 
         while (n % i == 0) 
         n /= i; 
       } 
       if (n > 1)
       result -= result / n; 
       return result; 
}
int main() {
    int n;
    long long H=0;
      int t;
	scanf("%d",&t);
	  while(t--) {
	      H=0;
  scanf("%d",&n);
  /* for(int i=1;i<=n;++i) {
	  H=H+(long long)(phi(1)*phi(i));
      }*/
    printf("%lld\n",(long long)phi(n)*phi(n));
    printf("\n");
	  }
  return 0;
}
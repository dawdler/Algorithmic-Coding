#include<stdio.h>
 
unsigned long long factorial(int);
unsigned long long find_ncr(int, int);
unsigned long long find_npr(int, int);
 
main()
{
   int n, r;
   unsigned long long ncr, npr;
unsigned long long  t,i;
scanf("%d",&t);
for(i=0;i<t;++i) { 
   //printf("Enter the value of n and r\n");
   scanf("%d%d",&n,&r);
 
   ncr = find_ncr(n+r-1, r-1);
    
   printf("%lld\n", ncr%1000007);
   
 }

   return 0;
}
 
unsigned long long find_ncr(int n, int r)
{
   unsigned long long result;
 
   result = factorial(n)/(factorial(r)*factorial(n-r));
 
   return result;
}
 
 
unsigned long long factorial(int n)
{
   unsigned long long  c;
   unsigned long long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
      result = result*c;
 
   return ( result );
}

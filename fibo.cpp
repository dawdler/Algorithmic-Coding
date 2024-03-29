#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
void multiply(int F[2][2], int M[2][2]);
 
void power(int F[2][2], long long int n);
long long int MOD; 
/* function that returns nth Fibonacci number */
int fib(long long int n)

{
  int F[2][2] = {{1,1},{1,0}};
  if(n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}
 
/* Optimized version of power() in method 4 */
void power(int F[2][2], long long int n)

{
  if( n == 0 || n == 1)
      return;
  int M[2][2] = {{1,1},{1,0}};
 
  power(F, n/2);
  multiply(F, F);
 
  if(n%2)
     multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
  int x =  (F[0][0]*M[0][0] + F[0][1]*M[1][0])%MOD;
  int y =  (F[0][0]*M[0][1] + F[0][1]*M[1][1])%MOD;
  int z =  (F[1][0]*M[0][0] + F[1][1]*M[1][0])%MOD;
  int w =  (F[1][0]*M[0][1] + F[1][1]*M[1][1])%MOD;
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
 
/* Driver program to test above function */
int main()
{
  long long int n;
	int m;
while(cin>>n>>m) {
	 MOD=1<<m;
	 
printf("%d\n", fib(n));
 // getchar();
}
  return 0;
}

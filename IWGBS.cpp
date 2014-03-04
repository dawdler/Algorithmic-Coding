#include<iostream>
using namespace std;
#define MAX 10001
unsigned long long int a[MAX]={0};
unsigned long long int fib(long long int n) {
	if(a[n]!=0) return a[n];
	a[n]=fib(n-1)+fib(n-2);
	return a[n];
	}

	
int main()
{
a[0]=0;
a[1]=2;
a[2]=3;
a[3]=5;

long long int n;
cin>>n;
if(n==0) { cout<<"0"<<endl;return 0; }
	cout<<fib(n)<<endl;
return 0;
}


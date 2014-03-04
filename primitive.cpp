#include<iostream>
#include<cmath>
using namespace std;

long phi(long n) {
	long result=n;
	long i;
	for(i=2;i<=sqrt(n);++i) {
		if(n%i==0) 
		result=result/i;
		while(n%i==0) 
			n/=i;
		}
if(n!=1)
	result-=result/n;
	return result;
	}

int main()
{
long n;
	cin>>n;
cout<<phi(phi(n))<<endl;
}


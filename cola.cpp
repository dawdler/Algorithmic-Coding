#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
char *names[]={"Sheldon",
		"Leonard",
		"Penny",
		"Rajesh",
		"Howard"};
long long int n;
long long int i=0,j=1;
long long int k=5;
cin>>n;
while(i<=n) {
	i+=k;
	k+=k;
	j+=j;
	}
cout<<names[int(ceil((n-(i-k*0.5))/(j*0.5))-1)];
return 0;
}


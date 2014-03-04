#include<iostream>
using namespace std;
#define MAX 1000000
int sieve[MAX];
int prime[MAX];
long list[MAX];
void seive() {
	long i,j;
	sieve[0]=sieve[1];
		for(i=2;i<3163;++i) {
			for(j=i+i;j<MAX;j+=i) sieve[j]=1;
}
j=-1;
for(i=2;i<MAX;++i) {
		if(sieve[i]==0) prime[++j]=i;
		}
}

int small(int num) {
		int i;
		for(i=0;i<MAX;++i) {
			if(num%prime[i]==0) return prime[i];
}
return num;
}


int main()
{
int n;
seive();
list[0]=list[1]=0;
//for(int i=0;i<MAX;++i) cout<<prime[i]<<" ";
for(int i=2;i<MAX;++i) {
		list[i]=list[i-1]+small(i);
}
cin>>n;
cout<<list[n]<<"\n\n";
return 0;
}


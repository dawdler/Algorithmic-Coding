#include<iostream>
#include<cmath>
using namespace std;
#define MAX 1000001
int sieve[MAX];
int prime[3163];

void seive() {
        long i,j;
        sieve[0]=sieve[1]=1;
                for(i=2;i<3163;++i) {
                        for(j=i+i;j<MAX;j+=i) sieve[j]=1;
}
j=-1;
for(i=2;i<MAX;++i) {
                if(sieve[i]==0) prime[++j]=i;
                }
}

int main()
{
int t;
int L,U;
int prev,next,diff;
int count[3163];
seive();
cin>>t;
while(t--) {
	cin>>L>>U;
	for(int i=0;i<3163;++i) {
		if(prime[i]<L) continue;
		if(prime[i]>=L) {
			prev=prime[i];
			next=prime[i+1];
			diff=next-prev;
			cout<<diff<<" ";
			count[diff]++;
		}
	if(prime[i]>U) break;
}
}
return 0;
}



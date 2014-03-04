#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 32800
bool prime[MAX];

int genprime() {
		for(int i=2;i<MAX;++i) prime[i]=true;

for(int i=2;i<MAX;++i) {
			if(prime[i]) {
		for(int j=i*i;j<MAX;j+=i) {
						prime[j]=false;
			}
		}
}
}

int main()

{
genprime();
int n,i;
int count;

	while(scanf("%d",&n)&&n) {
			count=0;
			for(i=2;i<=n-i;++i) {
			if(prime[i] && prime[n-i]) ++count;
				}
				cout<<count<<endl;
}
return 0;
}


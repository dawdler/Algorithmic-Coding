#include<iostream>
#include<cmath>
using namespace std;

#define MAX 1010
int prime[MAX];
int prime1[MAX];

void sieve() {
		int i,j;
	prime[0]=prime[1]=1;
	for(i=2;i<=sqrt(MAX);++i) {
			for(j=i+i;j<=MAX;j+=i) {
				prime[j]=1;
				}
	}
j=-1;
for(i=2;i<MAX;++i) {
		if(!prime[i]) prime1[++j]=i;
		}
}

int main()
{
sieve();
int n,k,sum;
int count=0;
cin>>n>>k;
//for(int i=0;i<30;++i) { cout<<prime1[i]<<" "; }

for(int i=0;i<MAX;++i) {
		sum=prime1[i]+prime1[i+1]+1;
		//cout<<sum<<" ";
		if(sum<=n) {
			if(!prime[sum]) ++count;
			}
		if(sum>n) break;
}
//cout<<"\ncount:"<<count<<endl;
if(count>=k) cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}

#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 20000001

bool sieve[MAX];
vector<int>primecol;
void gensieve()
{
long i,j;
sieve[0]=sieve[1]=true;
for(i=4;i<MAX;i+=2) sieve[i]=true;
for(i=2;i<=sqrt(MAX);++i) {
		if(!sieve[i]) {
			for(j=i+i;j<=MAX;j+=i) 
				sieve[j]=1;
}
}
j=-1;
for(i=2;i<MAX;++i) {
	if(!sieve[i]) 
		primecol.push_back(i);
	}
}

int main()
{
vector<int>twin;
int S;
int i=0;
int count=0;
gensieve();
//precompute the pairs
for(int i=1;i<primecol.size();++i) {
		if(primecol[i]-primecol[i-1]==2)
			twin.push_back(primecol[i-1]);
		}
while(scanf("%d",&S) !=EOF) {
     printf("(%d, %d)\n",twin[S-1],twin[S-1]+2);
}


return 0;
}

	





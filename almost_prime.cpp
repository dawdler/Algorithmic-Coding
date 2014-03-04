#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

#define MAX 100001
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
int t,low,high;
int count;
gensieve();
for(int i=0;i<100;++i) cout<<primecol[i]<<" ";
cin>>t;
while(t--) {
		count=0;
	cin>>low>>high;
	for(int i=low;i<=high;++i) {
			for(int j=0;;++j) {
				if(primecol[j]>i) break;
				if(i%primecol[j]==0) {
						++count;
			}	
			}
		}
	cout<<count<<endl;
}
return 0;
}



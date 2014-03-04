#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
#define MAX 300005
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
int n;
int count=0,final=0;
gensieve();
cin>>n;
for(int i=1;i<=n;++i) { count=0;
		for(int j=0;j<primecol.size();++j) {
				if(i%primecol[j]==0) {
					++count;
				}
			
}
if(count==2) { ++final; }
		}
		cout<<final<<endl;
return 0;
}

			

#include<iostream>
#include<cmath>
#define MAX 1000000
using namespace std;
long long int list[MAX];
int seive[MAX];		
int prime[MAX];
void seive_gen() {
		int i,j,sq;
		int k;
		//sq=sqrt(MAX);	
		seive[0]=seive[1]=1;
		for(int i=2;i<MAX;i+=2) seive[i]=1;
		for(i=3;i<3163;i+=2) {
			
				for(j=i*i,k=2*i;j<MAX;j+=k) 
						seive[j]=1;
}
j=-1;
for(int i=2;i<MAX;++i) {
			if(seive[i]==0) 
				prime[++j]=i;
		}
}


int small(int num) {
	long long int j;	
	int flag=0;
for(j=2;j<2166;++j) {
		if(num%prime[j]==0) { 
				flag=1;
				return prime[j];
			}
}

return num;
}
			
int main()
{
int t;

list[0]=list[1]=0;
long long int n,prime1;
seive_gen();
for(long long int i=2;i<MAX;++i) {
			
		list[i]=list[i-1]+small(i);
}


cin>>t;
while(t--) {
cin>>n;


cout<<list[n]<<"\n\n";
}
//for(int i=0;i<MAX;++i) cout<<prime[i]<<" ";
return 0;
}


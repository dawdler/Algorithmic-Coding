#include<iostream>
#include<cmath>
using namespace std;
#define MAX 1000000
bool prime[MAX];
void seive(){
	int i,j;
	for(i=2;i<MAX;++i) {		
		prime[i]=true;
	
}
for(i=2;i<sqrt(MAX);++i) {
		for(j=i;j*i<MAX;++j) {
		prime[i*j]=false;
}
}
}

int main()
{
seive();
int n,a;
while(cin>>n) {
	for(int i=2;i<n;++i) {
		if(prime[i] && prime[n-i]) {
		a=i;break;
}
}
if(a) cout<<n<<" = "<<a<<" + "<<n-a<<endl;
else cout<<"Goldbach's conjecture is wrong."<<endl;
}
return 0;
}
	

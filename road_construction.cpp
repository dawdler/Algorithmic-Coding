//based on star graph theory

#include<iostream>
#define MAX 10100
using namespace std;

int main() {

int n,m,a,b;
cin>>n>>m;
int temp=n+1;
int hash[MAX]={0};
for(int i=0;i<m;++i) {
cin>>a;
cin>>b;
hash[a]=1;
hash[b]=1;

}
//find out the center of the star graph
int center=-1;
for(int i=1;i<=n;++i){

	if(hash[i]==0) center=i;
}
cout<<n-1<<endl;
int k=1;
for(int i=0;i<n-1;++i){

if (k==center) k++;
cout<<center<<" "<<k<<endl;
k++;
}

	return 0;

}
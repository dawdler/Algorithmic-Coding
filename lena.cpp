#include<iostream>
using namespace std;

int main(){ 

int n,i,j,k,a,b;
cin>>n;

for(i=0;i<(n*2+1);++i) { 
//number of space in  a row
if(i>=0 && i<=n)
for(b=0;b<(2*n-i);++b) cout<<" ";
else 
for(b=0;b<((i-n)*2);++b) cout<<" ";
for(j=0;j<b;++j) cout<<j<<" ";
j=j-2;
for(k=j;k>=0;--k) cout<<k<<" ";
cout<<endl;
}

return 0;
}

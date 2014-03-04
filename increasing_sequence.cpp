#include<iostream>

using namespace std;

int main() { 
int n;
long long int d;
cin>>n>>d;
long long int list[n];
for(int i=0;i<n;++i) cin>>list[i];
int count=0;
for(int i=1;i<n;++i) { 
if(list[i]<=list[i-1]) { 

while(list[i]<=list[i-1]) { 
++count;
list[i]+=d;
}

}

}
cout<<count<<endl;
}

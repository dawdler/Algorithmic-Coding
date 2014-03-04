#include<iostream>
#include<algorithm>
#define MAX 110
using namespace std;
int main() { 

int t;
int n,k;
cin>>t;
int arr[MAX]={0};
while(t--) { 
cin>>n>>k;

for(int i=0;i<n;++i) cin>>arr[i];

sort(arr,arr+n);

for(int i=0;i<k;++i) { 
arr[0]*=-1;
sort(arr,arr+n);


}
int sum=0;
for(int i=0;i<n;++i) sum+=arr[i];
cout<<sum<<endl;
}

return 0;
}


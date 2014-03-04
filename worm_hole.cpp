#include<iostream>
#include<algorithm>
using namespace std;


int main() { 
int t,n,ans;

long long int sum;
cin>>t;
while(t--) { 
cin>>n;
sum=0,ans=0;
int list[n];
for(int i=0;i<n;++i) cin>>list[i];
sort(list,list+n);
sum=list[0]+list[1];
for(int i=2;i<n;++i) { 
if(sum>list[i]) ans=i+1;
sum+=list[i];

}
if(ans==0) cout<<"-1"<<endl;
else cout<<ans<<endl;
}

return 0;

}

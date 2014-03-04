#include<iostream>
#include<cstring>
#define MAX 100005
using namespace std;

int cnt[MAX];
int list[MAX];
int main() { 
int n,k;
cin>>n>>k;
int ct=0;
//memset(cnt,0,sizeof cnt);
for(int i=0;i<n;++i) { cin>>list[i];
cnt[list[i]]++;  
ct+=(cnt[list[i]]==1);

}
if(ct<k) { cout<<"-1 -1"<<endl; return 0; }
int l=0,r=n-1;
while(r>=0 && ct>=k) { 
if(cnt[list[r]]==1) ct--;
cnt[list[r]]--;
--r;

}
++r,++ct;

while(l<=r && ct>=k) { 
if(cnt[list[l]]==1) ct--;
cnt[list[l]]--;
++l;

}
--l,++ct;

cout<<l+1<<" "<<r+1<<"\n";
return 0;
}

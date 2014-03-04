#include<cstdio>
int f(int n){return n<2?2:f(n-1)*(4*n-2)/n;} main(){int t,m;cin>>t;while(t--){cin>>m;cout<<f(m)<<endl;return 0;}}


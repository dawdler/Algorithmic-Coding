#include<iostream>
#include<cstdio>
#include<cstring>
#define MAX 1100
int memo[MAX][MAX];
using namespace std;

int recursive(int h,int a,int cnt,int flag) { 

if(h<=0 || a<=0) return cnt;
if(memo[h][a]) return memo[h][a];
if(flag) memo[h][a]=max(memo[h][a],recursive(h+3,a+2,cnt+1,!flag));
else memo[h][a]=max(memo[h][a],max(recursive(h-5,a-10,cnt+1,!flag),recursive(h-20,a+5,cnt+1,!flag)));

return memo[h][a];

}

int main() { 
int t;
cin>>t;
for(int i=0;i<t;++i) { 
int a,b;
memset(memo,0,sizeof memo);
cin>>a>>b;
cout<<recursive(a,b,-1,1)<<endl;
if(i!=(t-1)) cout<<"\n";

}
return 0;

}

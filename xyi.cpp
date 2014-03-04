#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main() { 
int t;
int n,m,a,b,cnt1,cnt2,cnt3,cnt4;
int hash[600];
cin>>t;
for(int test=0;test<t;++test) {
memset(hash,0,sizeof hash);
cin>>n>>m;
cnt1=0,cnt2=0,cnt3=0,cnt4=0;
for(int i=0;i<m;++i) { 
cin>>a>>b;
hash[a]++;
hash[b]++;
}

for(int i=0;i<=n;++i) { 
if(hash[i]==1)
	cnt1++;
if(hash[i]==2)
	cnt2++;
if(hash[i]==3)
	cnt3++;
if(hash[i]==4)
	cnt4++;

}

if(cnt4==0 && cnt3==0 && cnt1==2){ 
printf("Case %d: I\n\n",test+1);continue;
} 

if(cnt4==1 && cnt1==4 && cnt3==0) { printf("Case %d: X\n\n",test+1);continue; }
if(cnt3==1 && cnt4==0 && cnt1==3) { 
printf("Case %d: Y\n\n",test+1);continue;
		}
printf("Case %d: NotValid\n\n",test+1);continue;

}

return 0;

}



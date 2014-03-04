#include<iostream>
#include<cstdio>
//static int count=0;
using namespace std;
int dp[600]={0};
int rec( int num) {
	static int count=0;
	int rem=0,s=0;
	int temp=0;
	++count;
	if(num<10) {
		if(num==1) return 1;
	else return 0;  }
if(dp[num]!=-1) {
		return 0;
	}
while(num>0) {
	rem=num%10;
	s+=rem*rem;
	num/=10;
	}
dp[s]=1;
temp=rec(s);
if(temp==0) return 0;
	else return 1;
}

int main()
{

int n;
scanf("%d",&n);
if(rec(n)) printf("-1\n");
else printf("%d\n",count);
return 0;
}


#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

#define MAX 110
int main(){

int list[MAX];
int n,sum=0;
scanf("%d",&n);
for(int i=0;i<n;++i) {
		scanf("%d",&list[i]);
		sum+=list[i];
}
sort(list,list+n);
int sum1=0,count=0;
int i;
for(i=n-1;i>0;--i) {
	++count;
	sum1=+list[i];
	sum-=list[i];
	printf("Sum1%d: sum:%d",sum1,sum);
	if(sum1>sum) break;
	}
printf("%d\n",count);
return 0;
}



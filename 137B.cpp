#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 5010
int list[MAX];

int main()
{
int count=0;
int n,temp;
scanf("%d",&n);
for(int i=0;i<n;++i) {
		scanf("%d",&temp);
			list[temp]++;
		}
for(int i=1;i<=n;++i) {
		if(!list[i]) ++count;
	}
printf("%d\n",count);
return 0;
}



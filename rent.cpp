#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
using namespace std;
#define MAX 10010
struct intervals {
		int s,e,p;
		
	}orders[MAX];
int N;
int best[MAX];

int find(int t) {
		int a=0,b=N;
	while((b-a)>1) {
			int  mid=(a+b)/2;
		if(orders[mid].s>=t)
		b=mid;
		else a=mid;
}
return b;
}
int comp(intervals a, intervals b) {
return (a.s==b.s)?a.e<b.e:a.s<b.s;
}

int main() {
		int t;
		scanf("%d",&t);
		while(t--) {
			scanf("%d",&N);
			for(int i=0;i<N;i++) {
					scanf("%d %d %d",&orders[i].s,&orders[i].e,&orders[i].p);
				}
		//sort the data according to end time
		sort(orders,orders+N,comp);
		memset(best,0,sizeof(best));
	best[N]=0;//base case;
		for(int i=N-1;i>=0;i--) {
				best[i]=max(best[i+1],best[find(orders[i].s+orders[i].e)]+orders[i].p);
}
printf("%d\n",best[0]);
}
return 0;
}


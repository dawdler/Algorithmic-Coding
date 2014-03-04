#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#define MAX 1000
//#define push_back pb
using namespace std;
typedef struct blk {
	int x,y,z;
	} block;

bool comp(block a,block b) {
	if (a.x != b.x) return (a.x<b.x);
	else if (a.y!=b.y) return (a.y<b.y);
	else return (a.z<b.z);
	}

vector<block> lst;
int lis[MAX];


int LIS(int n) {
	int max_lis(-1),i,j,k;
	for(int i=0;i<n;++i) {
		lis[i]=lst[i].z;
		for(int j=0;j<i;j++) {
if(( (lst[i].x > lst[j].x && lst[i].y > lst[j].y) || (lst[i].x > lst[j].y && lst[i].y > lst[j].x) ) ) {
		lis[i] = max (lis[i], lis[j]+lst[i].z);
	}
	}
max_lis=max(lis[i],max_lis);
	}
	return max_lis;
	}
int main() {
	int n,i,x,y,z,kase=1;
	//while(scanf("%d",&n) && n) {
	while(1) {
		scanf("%d",&n);
		if(n==0) break;
			lst.clear();
	for(int i=0;i<n;++i) {
		scanf("%d %d %d",&x,&y,&z);
	lst.push_back( (block) {x,y,z} );
	lst.push_back( (block) {x,z,y} );
	lst.push_back( (block) {y,x,z} );
	lst.push_back( (block) {y,z,x} );
	lst.push_back( (block) {z,x,y} );
	lst.push_back( (block) {z,y,x} );
	}
	sort(lst.begin(),lst.end(),comp);
	int res=LIS(lst.size());
	//printf("Case %d: maximum height = %d\n",kase++,res);
	printf("%d\n",res);
	}
	return 0;
}



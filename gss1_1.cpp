#include<iostream>
#include<cstdio>
using namespace std;
#define MAX 50010
#define REP(i,n) for(i=0;i<(n);i++)
int a[MAX];

struct node {
	int sum,left,right,best;
};
node t[200000];
int n,b,c,i,m,tmp,x;

node make_data(int val) {
		node res;
		res.sum=val;
		res.left=res.right=res.best=max(-1000000,val);
		return res;
		}

node combine(node l,node r) {
		node res;
		res.sum=l.sum+r.sum;
		res.left=max(l.left,l.sum+r.left);
		res.right=max(r.right,r.sum+l.right);
		res.best=max(max(l.best,r.best),l.right+r.left);
		return res;
		}


node query(int v,int t1,int tr,int l,int r) {
		if(l==t1 && tr==r)
			return t[v];
	int mid=(t1+tr)/2;
		if(r<=mid) return query(v*2,t1,mid,l,r);
		if(l>mid) return query(v*2+1,mid+1,tr,l,r);
		return combine(query(v*2,t1,mid,l,mid),query(v*2+1,mid+1,tr,mid+1,r));
}

			

void build(int a[],int v,int t1,int tr ) {
		if(t1==tr) {
				t[v]=make_data(a[t1]);
		}
else {
		int mid=(t1+tr)/2;
		build(a,v*2,t1,mid);
		build(a,v*2+1,mid+1,tr);
		t[v]=combine(t[v*2],t[v*2+1]);
		}
}


int main(){

scanf("%d",&x);
REP(i,x) {
	scanf("%d",&a[i+1]);
}
build(a,1,1,x+1);
cin>>m;
REP(i,m) {
		scanf("%d%d",&b,&c);
		printf("%d\n",query(1,1,x+1,b,c).best);
}
return 0;
}


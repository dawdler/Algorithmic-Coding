#include<iostream>
using namespace std;
#define MAX 100
int list[MAX];
int seg_tree[1];
void build(int node,int left,int right) {
		//base case
		if(left==right) {
			seg_tree[node]=list[left];
		return ;
		}
		int mid=(left+right)/2;
		build(node*2,left,mid);
		build(node*2+1,mid+1,right);
		seg_tree[node]=min(seg_tree[node*2],seg_tree[node*2+1]);
				
	}

int query(int node,int left,int right,int a,int b){
		//completely out of range
	if(a==left&&b==right) return seg_tree[node];
int mid=(left+right)/2;
if(mid>=b) query(2*node,left,mid,a,b);
else if (a>=mid+1) query(2*node+1,mid+1,right,a,b);
else
{
int i=query(2*node,left,mid,a,mid);
int j=query(2*node+1,mid+1,right,mid+1,b);
return min(i,j);
}
}

void update(int node,int left,int right,int i,int val) {
//cout<<"node:"<<node<<endl;	
if(left==right) {
			seg_tree[node]=val; return ; }
int mid=(right+left)/2;
update(node*2,left,mid,i,val);
update(node*2+1,mid+1,right,i,val);
seg_tree[node]=min(seg_tree[node*2],seg_tree[node*2+1]);
}


int main()
{
int n;
int min;
cin>>n;
for(int i=1;i<=MAX;++i) seg_tree[i]=0;
for(int i=1;i<=n;++i) cin>>list[i];
build(1,1,n);
int i,j,val,idx;
cin>>i>>j;
//for(int i=1;i<MAX;++i) cout<<seg_tree[i]<<" ";
cout<<"Min element is:"<<query(1,1,n,i,j);
//cout<<min;
cout<<"Enter value to be changed:"<<endl;
cin>>idx>>val;
update(1,1,n,idx,val);
cin>>i>>j;
cout<<"Min elemnet is"<<query(1,1,n,i,j);
return 0;
}


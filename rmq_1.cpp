#include<iostream>
#define N 200
using namespace std;
class tree{
public:
int data;
int flag;
tree()
{
data=0;
flag=0;
}
};
int arr[N];
tree seg_tree[3*N];
void build(int node,int l,int r)
{
if(l==r)
{
seg_tree[node].data=arr[l];
return;
}
int mid=(l+r)/2;
build(2*node,l,mid);
build(2*node+1,mid+1,r);

seg_tree[node].data=max(seg_tree[2*node].data,seg_tree[2*node+1].data);
}
void update(int node,int l,int r,int i,int j,int n)
{
if(l==i&&r==j)
{
seg_tree[node].flag+=n;
seg_tree[node].data+=n;
return;
}
int mid=(l+r)/2;
if(mid>=j)
{
update(2*node,l,mid,i,j,n+seg_tree[node].flag);
}
else if(mid<i)
update(2*node+1,mid+1,r,i,j,n+seg_tree[node].flag);
else
{
update(2*node,l,mid,i,mid,n+seg_tree[node].flag);
update(2*node+1,mid+1,r,mid+1,j,n+seg_tree[node].flag);

}
seg_tree[node].data=max(seg_tree[2*node].data,seg_tree[2*node+1].data);
}
int query(int node,int l,int r,int i,int j,int offset)
{
if(l==i&&j==r)
{
return (seg_tree[node].data+offset);
}
int mid=(l+r)/2;
if(mid>=j)
return query(2*node,l,mid,i,j,offset+seg_tree[node].flag);
else if(mid<i)
return query(2*node+1,mid+1,r,i,j,offset+seg_tree[node].flag);
else
{
int a=query(2*node,l,mid,i,mid,offset+seg_tree[node].flag);
int b=query(2*node+1,mid+1,r,mid+1,j,offset+seg_tree[node].flag);
return max(a,b);
}
}
void display(){ 
		for(int i=1;i<=N;++i) {
				cout<<seg_tree[i].data<<" ";
		}

}
int main()
{
int size;
cout<<"\nEnter size :"<<endl;
cin>>size;
for(int i=1;i<=size;++i) cin>>arr[i];
build(1,1,size);
display();
int i,j;
cin>>i>>j;
update(1,1,size,i,j,1);
display();
cin>>i>>j;
cout<<query(1,1,size,i,j,0)<<endl;
display();



return 0;

}

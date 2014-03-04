#include<iostream>
#include<cstdio>
//#include<climit>
#include<algorithm>
#include<cmath>
#include<cstdlib>
//#include<ctype>
using namespace std;
#define MAX 500100
int a[3*MAX],inp[MAX];
void build(int Aindex,int l,int r);
int query(int Aindex,int l,int r,int i,int j);

int main()
{
int n,m;
int temp;
scanf("%d",&n);
for(int i=1;i<=n;i++)
scanf("%d",&inp[i]);
inp[0]=0;
build(1,1,n);
//for(int i=1;i<20;i++)
//printf("%d ",a[i]);
scanf("%d",&m);
int x,y;
for(int i=1;i<=m;i++)
{
scanf("%d%d",&x,&y);
temp=query(1,1,n,x,y);
if(temp<0) cout<<"0"<<endl;
else cout<<temp<<endl;
//printf("%d\n",query(1,1,n,x,y));
}
return 0;
}
void build(int Aindex,int l,int r)
{
if(l==r)
{
a[Aindex]=inp[l];
return;
}
build(2*Aindex,l,(l+r)/2);
build(2*Aindex+1,(l+r)/2+1,r);
if(a[2*Aindex]>0&&a[2*Aindex+1]>0)
a[Aindex]=a[2*Aindex]+a[2*Aindex+1];
else
a[Aindex]=max(a[2*Aindex],a[2*Aindex+1]);
}
int query(int Aindex,int l,int r,int i,int j)
{
if(r<i||j<l)return -10000000;
if(i<=l&&r<=j)
return a[Aindex];
int temp1=query(2*Aindex,l,(l+r)/2,i,j),temp2=query(2*Aindex,(l+r)/2+1,r,i,j);
if(temp1>0&&temp2>0)
return temp1+temp2;
else return max(temp1,temp2);
}


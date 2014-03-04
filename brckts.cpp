#include<iostream>
#include<vector>
#include<cstdio>
#include<cmath>
#include<string>
using namespace std;
class pi
{
public:
int a,b;
pi()	{a=0;b=0;}
pi(int x,int y) {a=x;b=y;}
};
vector<pi> tree;
string str;
pi combine(pi a,pi b)
{
pi x;
if(a.b==b.a)
{
x.a=a.a;
x.b=b.b;
}
else if(a.b > b.a)
{
x.a=a.a;
x.b=a.b-b.a+b.b;
}
else
{
x.b=b.b;
x.a=b.a-a.b+a.a;
}
return x;
}
void build(int node,int b,int e)
{
if(b==e)
{
if(str[b]=='(')
{
tree[node].a=0;
tree[node].b=1;
}
else
{
tree[node].a=1;
tree[node].b=0;
}
return;
}
//	cout<<node<<"\n";
int mid=(b+e)/2;
build(node*2,b,mid);
build(node*2+1,mid+1,e);
tree[node]=combine(tree[node*2],tree[node*2+1]);
}
void update(int node,int b,int e,int index)
{
if(index < b || index >e)  return;
if(b==e)
{
if(tree[node].a==1)
tree[node].a=0;
else
tree[node].a=1;
if(tree[node].b==1)
tree[node].b=0;
else
tree[node].b=1;
return;
}
int mid=(b+e)/2;
update(node*2,b,mid,index);
update(node*2+1,mid+1,e,index);
tree[node]=combine(tree[node*2],tree[node*2+1]);
}
main()
{
for(int test=1;test<=10;test++)
{
printf("Test %d:\n",test);
int n;
scanf("%d",&n);
if(!n) continue;
int size=(1<<(int(log10(n)/log10(2))+2));
//		cout<<size<<"\n";
vector<pi> temp(size);
tree=temp;
temp.clear();
string s;
cin>>s;
str=s;
s.clear();
build(1,0,str.size()-1);
int x;
scanf("%d",&x);
while(x--)
{
int k;
scanf("%d",&k);
if(k==0)
{
if(!tree[1].a && !tree[1].b)
printf("YES\n");
else
printf("NO\n");
}
else
update(1,0,str.size()-1,k-1);
}
}

}

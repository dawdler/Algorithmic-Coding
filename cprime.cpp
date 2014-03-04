#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cmath>
using namespace std;

#define MAX 100000000
#define LMT 10000
#define LEN 5761456

unsigned flag[MAX/64];
int a[LEN+10];
int total;

#define ifc(x) (flag[x>>6]&(1<<((x>>1)&31)))
#define isc(x) (flag[x>>6]|=(1<<((x>>1)&31)))

void sieve()
{
int i, j, k;
for(i=3; i<LMT; i+=2)
if(!ifc(i))
for(j=i*i,k=i<<1; j<MAX; j+=k)
isc(j);
a[0] = -1;
a[1] = 2;
for(i=3,j=2; i<MAX; i+=2)
if(!ifc(i))
a[j++] = i;
total = j;
}


int BS(int st, int fn, int val)
{
    int mid;
    while(st <= fn)
    {
        if(val < a[st]) return st-1;
        if(val > a[fn]) return fn;
        mid = (st+fn) / 2;
        if(val == a[mid]) return mid;
        else if(val < a[mid]) fn = mid-1;
        else st = mid+1;
    }
    return total-1;
}
int main()
{
sieve();
int i,n,u,l;
int p1,p3;
double x,p2,r;
double f,n1;
while(scanf("%d",&n)==1 && n){
	//	u=upper_bound(a.begin(),a.end(),n);
	//	l=lower_bound(a.begin(),a.end(),n);
	//	p1=u-l;
	f=lower_bound(a,a+LEN,n)-a-1;
//	cout<<f;
			
		//p2=BS(0,total-1,n);
		//p2 and *f must be equal for my lower_bound() to be working correctly 
		//cout<< "p2:"<<p2<<endl;
	n1=n;
	x=(fabs(f-n1/log(n1) )/f) * 100.0;
	printf("%.1lf\n",x);
}
return 0;
}


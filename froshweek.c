#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)

typedef long long ll;
const int N = 1000010;
const ll inf = (1LL << 60);
ll in[N];
ll L[N],R[N];
long long cnt=0;

void merge(ll a[],int l,int mid,int r){
  int n1=mid-l+1,n2=r-mid;

  for(int i=0;i<n1;i++){
    L[i]=a[l+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=a[mid+i+1];
  }
  L[n1]=R[n2]=inf;
  int pr=0,pl=0;
  for(int i=l;i<r+1;i++){
    if (L[pl] <= R[pr]){
      a[i]=L[pl++];
    }else if (L[pl] > R[pr]){
      //cnt+=n1-pl;
	++cnt;
      a[i]=R[pr++];
    }
  }
}

void mergesort(ll a[],int l,int r){
  if (l < r){
    int q =(r+l)/2;
    mergesort(a,l,q);
    mergesort(a,q+1,r);
    merge(a,l,q,r);
  }
}

main(){
  int n;
  while(scanf("%d",&n) != -1){
    rep(i,n)scanf("%lld",&in[i]);
    cnt=0;
    mergesort(in,0,n-1);
    cout << cnt<< endl;
  }
}

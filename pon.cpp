#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
typedef unsigned long long LL;


LL mulmod(LL a,LL b,LL c){
    LL x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
LL power(LL a,LL b,LL n){
	if(b==0)
		return 1;
	if(b==1) return a%n;
		LL c=power(a,b/2,n);
		LL p=mulmod(c%n,c%n,n);
		if(b%2==0)
			return p;
		else
			 return (mulmod(p,a,n));
}
		
bool miller_test(LL n,LL k=1){
	if(n<2) return false;
	if(n==2|| n==3)return true;
	if(n%2==0)return false;
		LL s=n-1;
		while(!(s&1)) s = s>>1;
		for(LL i=0;i<k;i++){
			LL flag=0;
			LL a = rand()%(n-3)+2;	
			LL x = power(a,s,n);
			if(x==1 || x==n-1)continue;
			while(s!=n-1 && x!=1 && x!=n-1){
				x = mulmod(x%n,x%n,n);
				s=s<<1;
			}
			if(x!=n-1 && !(s&1))return false;
		}
		return true;
}

int main(){
int t;
scanf("%d",&t);
while(t--){
LL a;
scanf("%lld",&a);
	if(miller_test(a))printf("YES\n");
	else
		printf("NO\n");
}
return  0;
}

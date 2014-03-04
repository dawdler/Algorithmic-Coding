#include<iostream>
using namespace std;
#define MAX 2010
int phi[MAX] ;
void sievePHI(){
	long long i,j;
	for( i=2;i<MAX;i++){
		if( phi[i]==0){
			phi[i] = i-1;
			for( j = i*2; j<MAX; j+=i){
				if( phi[j] == 0 )phi[j] = j;
				phi[j] /= i ;
				phi[j] *= (i-1) ;
			}
		}
	}
}
int main()
{
sievePHI();
long long n;
cin>>n;
cout<<phi[phi[n]]<<endl;
return 0;
}


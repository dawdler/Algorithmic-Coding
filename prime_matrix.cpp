#include<iostream>
#include<vector>
#include<cmath>
#define MAX 100001
#define MAX1 501
using namespace std;
bool sieve[MAX];
vector<int>primecol;

void gensieve()
 {
long i,j;
sieve[0]=sieve[1]=true;
for(i=4;i<MAX;i+=2) sieve[i]=true;
for(i=2;i<=sqrt(MAX);++i) {
                if(!sieve[i]) {
                        for(j=i+i;j<=MAX;j+=i)
                                sieve[j]=true;
}
}
j=-1;
for(i=2;i<MAX;++i) {
        if(!sieve[i])
                primecol.push_back(i);
        }
}

int main()
{
int m,n;
int min1=999999,min2=999999;
gensieve();
int arr[MAX1][MAX1];
for(int i=0;i<MAX1;++i) {
	for(int j=0;j<MAX1;++j) {
			arr[i][j]=0;
   } 
 }
cin>>n>>m;
for(int i=0;i<n;++i) {//receive the data
        for(int j=0;j<m;++j) {
                       cin>>arr[i][j];
   }
 }
int a;
int moves;
for(int i=0;i<n;++i) {
		a=0;
		moves=0;
		for(int j=0;j<m;++j) {
			if(sieve[arr[i][j]])  { //if it's nt prime 
			cout<<"this is nt prime"<<arr[i][j]<<endl;	
			while(1) {
			if(primecol[a]>arr[i][j]) {
				moves+=primecol[a]-arr[i][j]; break;
				}
					++a;
			}
		}
	}
	if(moves<min1) min1=moves;
}
int moves1;
for(int i=0;i<n;++i) {
                a=0;
                moves1=0;
                for(int j=0;j<m;++j) {
                        if(sieve[arr[j][i]])  { //if it's nt prime 
                        cout<<"this is nt prime"<<arr[j][i]<<endl;
                        while(1) {
                        if(primecol[a]>arr[j][i]) {
                                moves+=primecol[a]-arr[j][i]; break;
                                }
                                        ++a;
                        }
                }
        }
        if(moves1<min2) min2=moves;
}


if(min1<min2) cout<<min1<<endl;
else cout<<min2<<endl;
return 0;
}

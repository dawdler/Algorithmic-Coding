
#include<iostream>
using namespace std;
#define MAX 100009
int main()
{
double mul[MAX];
int n;
double temp;
cin>>n;

cin>>temp;
mul[1]=temp;
	for(int i=2;i<=n;++i) {
		cin>>temp;
		mul[i]=mul[i-1]*temp;
		}
//for(int i=1;i<=n;++i) cout<<mul[i]<<endl;
int t;
	cin>>t;
	int a,b,m;
	for(int i=0;i<t;++i) {
		cin>>a>>b>>m;
		if(a-1<=0) { cout<<(int(mul[b]))%m<<endl; continue; }
		cout<<(int(mul[b]/mul[a-1]))%m<<endl;
	}
	return 0;
}



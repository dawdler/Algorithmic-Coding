#include<iostream>
#include<string>
#include<cmath>
using namespace std;
#define pb push_back
int main()
{
int n,x,y;
string p;
int sum1=0,sum2=0;
cin>>n;
for(int i=0;i<n;++i) {
		cin>>x>>y;
		if((int)fabs(sum1+x-sum2)<=500) {
			sum1+=x;
			p.pb('A');
			}
		else if((int) fabs(sum1-sum2-y)<=500) {
				sum2+=y;
				p.pb('G');
		}
		else { cout<<"-1"<<endl; return 0; }


}
cout<<p<<endl;
return 0;
}



#include<iostream>
using namespace std;

int main()
{
int t;
unsigned long long n,k;
cin>>t;
while(t--) {
	cin>>n>>k;
	if(n==0 && k==0) {
		cout<<"0"<<" "<<"0"<<endl;
		continue;
		}
	if(k==0) { cout<<"0"<<" "<<n<<endl;
		continue; }
		cout<<n/k<<" "<<n%k<<endl;
	}
return 0;
}

	

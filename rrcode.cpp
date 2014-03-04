#include<iostream>
#include<string>

using namespace std;

int main() { 
int t;
unsigned int n,k,ans;
unsigned int list[1005];
string oper;
cin>>t;
bool zero;

	while(t--) { 
	cin>>n>>k>>ans;
	
	
	for(int i=0;i<n;++i) { cin>>list[i];	 
		}
	cin>>oper;
	if(k==0) { cout<<ans<<endl; continue; }
	if(oper=="OR") { for(int i=0;i<n;++i) ans=ans|list[i];
		cout<<ans<<endl; continue; }
	
	if(oper=="AND") { 
	for(int i=0;i<n;++i) ans=ans & list[i];
	cout<<ans<<endl;
	continue;
	}
	if(oper=="XOR") { 
	for(int i=0;i<n;++i) ans=ans ^ list[i];
	cout<<ans<<endl;
	continue;
	}		
	}	
	
	return 0;
	
}

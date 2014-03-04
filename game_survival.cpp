#include<iostream>
#include<algorithm>

using namespace std;

int main() { 
	int t;
	cin>>t;
	while(t--) { 
	int n;
	cin>>n;
	int animal[n];
	int power[n];
	for(int i=0;i<n;++i) cin>>power[i];
	for(int i=0;i<n;++i) cin>>animal[i];
	sort(power,power+n);
	sort(animal,animal+n);
/*	cout<<endl;
	for(int i=0;i<n;++i) cout<<power[i]<<" ";
	cout<<endl;
	for(int i=0;i<n;++i) cout<<animal[i]<<" ";
*/	
	bool flag=false;
	for(int i=0;i<n;++i){ 
		if(power[i]>animal[i]) { 
			flag=true;
				}
		else { flag=false; cout<<"NO"<<endl; break;  }
		
		}
		
		if(flag) cout<<"YES"<<endl;
		}
	
	}

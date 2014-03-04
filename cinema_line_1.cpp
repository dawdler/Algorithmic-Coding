#include<iostream>

using namespace std;

int main() { 
	long long int temp;
	long long int n;
	long long int flag=0;
	long long int count=0;
	cin>>n;
	for(int i=0;i<n;++i) {  
	cin>>temp;
	if(i==0) {  if(temp==25) { ++count;flag=1; continue; }  }
	if(temp==25) { 
	if(flag!=0){ 
	++count; flag=1; continue; }  }
	long long int rem=temp-25;
	if(rem>25*count) { flag=0;  }
	else { 
		if(flag!=0) { 
			count=count-rem/25;
			++count;
			} 
		}
	
		}
 
	if(flag) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	}

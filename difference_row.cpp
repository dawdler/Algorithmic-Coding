#include<iostream>
#include<algorithm>
using namespace std;

int main() { 
int n;
int num[1010];
	cin>>n;
	int j=n;
	for(int i=0;i<n;++i) cin>>num[i];	
	sort(num,num+n);
	for(int i=0;i<n;++i) cout<<num[i]<<" ";
	cout<<endl;
	for(int i=1;i<n/2;i+=2) {	
	cout<<"i:"<<i<<"j:"<<j-i-1<<endl;
		
	int temp;
	temp=num[i];
	num[i]=num[j-i-1];
	num[j-i-1]=temp;
	
	
	}
	for(int i=1;i<=n;++i) cout<<num[i]<<" ";
return 0;
}

#include<iostream>
using namespace std;

int main() { 

int n;
cin>>n;
int count=1;
int sum=0;
for(int i=n;i>=1;--i) { 
	
	for(int j=1;j<=i-1;++j) { 
		sum+=count;

		}
	sum+=1;
	//cout<<"sum:"<<sum<<endl;
//	cout<<"count:"<<count<<endl;
	++count;
	}
cout<<sum<<endl;
return 0;
}

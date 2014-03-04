#include<iostream>

using namespace std;

int main()
{
int n;

int max=-1;
int count=0;
cin>>n;
int list[n];
for(int i=0;i<n;++i) {
	cin>>list[i];
	}

for(int i=0;i<n;++i) {
	count=0;
	for(int a=0;a<i;++a) {
		if(list[a]==1) ++count;
		cout<<count<<" " ;
			}
cout<<endl;
	for(int k=i+1;k<n;++k) {
	for(int j=i;j<k;++j) 
		if(list[j]==0) { ++count; cout<<count<<" "; }
	if(count>max) max=count;
	
	}
}

cout<<max<<endl;
return 0;
}


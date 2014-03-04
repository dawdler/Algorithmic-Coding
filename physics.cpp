#include<iostream>
#include<algorithm>
#define MAX 100001
using namespace std;


int main()
{
int n,i;
int count=0;
int list[MAX];
cin>>n;
	for(i=0;i<n;++i) {
		cin>>list[i];
		}
	sort(list,list+n);
	//for(int i=0;i<n;++i) cout<<list[i]<<endl;
	if(list[n-1]<=2*list[0]) { //cout<<"I m here\n"<<endl;
		cout<<"0"<<endl; return 0; }
	i=0;
	while(list[n-1]>2*list[i]) {
		//cout<<"I m here\n"<<endl;
		++count;
		++i;
	}
	cout<<count<<endl;
return 0;
}
	

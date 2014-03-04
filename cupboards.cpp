#include<iostream>

using namespace std;

int main()
{
int n;
int left_open=0,left_close=0;
int right_open=0,right_close=0;
int left,right;
int count=0;
cin>>n;
for(int i=0;i<n;++i) {
	cin>>left>>right;
	if(left==1) ++left_open;
	else ++left_close;
	if(right==1) ++right_open;
	else ++right_close;
	}
if(left_open>left_close) {
	count+=left_open;
	}
	else count+=left_close;
	if(right_open>right_close) {
			count+=right_open;
	}
	else count+=right_close;
	cout<<2*n-count<<endl;
return 0;
}





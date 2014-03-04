#include<iostream>
#define MAX 110
using namespace std;
bool check(int num) {
	if(num==0) return true;
	int temp;
	while(num>0) {
		temp=num%10;
		if(temp==0) return true;
		num=num/10;
			}
	return false;
}

int main() {
	int k,list[MAX],ans[MAX],count=0;
	int j=0;
	bool flag1=false;
	bool ans1;
	cin>>k;
	for(int i=0;i<k;++i) {
		cin>>list[i];
		if(i==k-1) { //last element
			if(!check(i-1)) {
				if(check(i)) {
					ans[j++]=list[i-1];
					ans[j]=list[i];
					}
		}
		}
					if(flag1==false) {
		ans1=check(list[i]);
		if(ans1==true) {
			flag1=true;
			ans[j++]=list[i];
			}
			}
		else  {
			flag1=false;
			ans[j++]=list[i];
		}
}
	
	cout<<j<<endl;
for(int i=0;i<j;++i) {
		cout<<ans[i];
		if(i+1>j) break;
		else cout<<" ";
	}
	return 0;
}

		

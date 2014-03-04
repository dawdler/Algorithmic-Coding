#include<iostream>
#include<algorithm>
#define MAX 110

using namespace std;

int main() { 
int n,m;
int high=-111111;
cin>>n>>m;
int correct[n],incorrect[m];
	for(int i=0;i<n;++i) {  cin>>correct[i];
		if(correct[i]>high) high=correct[i];
  }

for(int i=0;i<m;++i) { 
	cin>>incorrect[i];
	
	}
//cout<<high<<endl;
int v=high;
int flag=0;

for(int i=0;i<m;++i) { 
if(incorrect[i]>high) flag=1;
	else { flag=0;	cout<<"-1"<<endl; return 0; }
	
}
int flag1=0;
if(flag==1) { //check for 2a<=v
	for(int i=0;i<n;++i) { 
	if(correct[i]*2<=v) {   flag1=1;
	}
	
	}
}
if(flag1) cout<<v<<endl;
else cout<<"-1"<<endl;
return 0;

}

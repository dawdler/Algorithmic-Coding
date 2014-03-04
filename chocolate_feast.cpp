#include<iostream>

using namespace std;


int main() { 
int m,n,c;
int t;
cin>>t;
while(t--) { 

	cin>>n>>c>>m;
	int no_c=n/c;
	if(no_c<m) cout<<no_c<<endl;
	
	else { 
		int avial=no_c;
		while(avial>=m) { 
			avial-=m;
			++avial;++no_c;
				}
			cout<<no_c<<endl;
			}

}
return 0;

}

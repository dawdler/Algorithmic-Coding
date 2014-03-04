#include<iostream>
using namespace std;
int main()
{
int answer,test;cin>>test;
int base,expo;
while(test--) {
cin>>base>>expo;
if(expo==0) {	cout<<1<<endl;
	}
else { 
	expo%=4;
	if(expo==0) {
			expo=4;
 }
answer=1;
	for(int j=0;j<expo;++j) {
			answer*=base;
}		
cout<<answer%10<<endl;
}
}
return 0;
}


#include<iostream>
#define A 1
#define D 2

using namespace std;
int main()
{
int n;
int order;
int num1,num2,prev,num;
int flag=1;
cin>>n;
for(int j=0;j<n;++j) {
	flag=1;
	cin>>num1>>num2;
	if(num2>num1) order=A;
	else order=D;
	prev=num2;
	for(int i=1;i<=8;++i) {	
		cin>>num;
		if(order==A) {
			if(num>prev) continue; 
			else {
				if(flag) flag=0; 
  				}
		}
		else  {
			if(num<prev) continue;
			else {
				if(flag) flag=0;	
		}
	}
}
if(!j) cout<<"Lumberjacks:"<<endl;
if(flag) cout<<"Ordered"<<endl;
else cout<<"Unordered"<<endl; 
}
return 0;
}


		
   

#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 100001
int main()
{
int n;
int temp;
int list[MAX];
bool flag=false;
cin>>n;
if(n==1) {
	cin>>temp;
	if(temp==0) { cout<<"0"<<endl; return 0;}
	else { cout<<"-1"<<endl; return 0;}
 	}
long long int num=0;
//receive and create the number
for(int i=0;i<n;++i) {
	cin>>list[i];
	if(list[i]==0) flag=true;
	
	}
//for(int i=0;i<n;++i) cout<<list[i]<<" ";
if(!flag) { cout<<"-1"<<endl; return 0 ;} 
sort(list,list+n);
for(int i=n;i>=0;--i) {
	num=list[i]+num*10;
	cout<<num<<" ";
		}
cout<<"Initial number is:"<<num<<endl;
	cout<<num/30<<endl;
	if(num%30==0) { cout<<num<<endl; }
	else {
		while(num>0) {
		num=num/100;
		num*=10;
		if(num%30==0) {
				cout<<num<<endl;
				break;
				}
		}
}
return 0;
}


   


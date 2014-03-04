#include<iostream>
#include<string>
using namespace std;

int main()
{
bool flag=true;
string num;
cin>>num;
int i=0;
int len=num.length();
//cout<<"Length is:"<<len<<endl;
while(i<=len-1) {
		if(i==0) {
			if(num[i]!='1') {
					cout<<"NO"<<endl;
					return 0;
					}
				}
		if(num[i]=='1') {
				if(num[i+1]=='4' && num[i+2]=='4') {
					i=i+3;
					}
				else if(num[i+1]=='4') {
						i+=2;
						}
				else i+=1;
			}
		else {
			cout<<"NO"<<endl;
			return 0;
			}
	
	
}
cout<<"YES"<<endl;
return 0;
}


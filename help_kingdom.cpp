#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
string num,result;
int i=0,start=0;
int len=0;
bool brackets=false,dot=false;
int count=1;
cin>>num;
int pos=num.length();
if(num[i]=='-') { brackets=true;start=1; }
if(brackets) cout<<"(";
cout<<"$";

for(i=start;i<num.length();++i) {
	if(num[i]=='.') {dot=true; pos=i; break; }
	}
	
	for(i=pos-1;i>=start;--i) {//comma operation
			//cout<<num[i]<<" ";
			//cout<<count<<" ";
			result+=num[i]; ++count;
			if(count>4) {
				 result+=','; 
				count=0; }
			}
		
		reverse(result.begin(),result.end());
		result+='.';
		//cout<<"initial result:"<<result<<endl;
		if(!dot) { result+='0';	result+='0';
			}
		//if dot present
		if(dot) {
			if((num.length()-pos)>=2) {
						result+=num[pos+1];
						result+=num[pos+2];
				}
			}

			
cout<<result;
if(brackets) cout<<")";
return 0;
}

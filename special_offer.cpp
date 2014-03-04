#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(){
int num,red;
string beg="9";
cin>>num>>red;
int low=num-red;
string temp=std::to_string(low);
	int length=temp.length();
	for(int i=length;i>=0;--i) {
		if(temp[i]==beg) continue;
		temp[i]=beg;
		int new_value=atoi(temp.c_str());
		if(new_value<num) {
			temp=itoa(new_value);
			}
		else if(new_value>num) {
				while(new_value>num) {
					int temp1=atoi(beg.c_str());
					--temp1;
					temp[i]=itoa(temp1);
					new_value=atoi(temp.c_str());
					beg=itoa(temp1);
					}
		}
		else { }
		}
	cout<<new_value<<endl;
return 0;
}


				



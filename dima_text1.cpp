#include<iostream>
#include<string>
using namespace std;

int main() { 
int n;
cin>>n;
string temp;
string org="<3";
for(int i=0;i<n;++i) { 
cin>>temp;
org+=temp;
org+="<3";
}
int flag=0;
string given;
cin>>given;
int j,i;
if(given.length()<org.length()) { cout<<"no"<<endl; return 0; }

for(i=j=0;i<given.length() &&j<org.length();j++) { 

if(given[i]!=org[j]) { 
	if((given[i]>='a' && given[i]<='z')||(given[i]=='>')||(given[i]=='<')||(given[i]>='0' && given[i]<='9')) { i++;  j--;  }
else  { 
	flag=1;
	break;
	}
}
else i++;


}
if(!flag && j==org.length()) cout<<"yes"<<endl;
else cout<<"no"<<endl;
return 0;
}

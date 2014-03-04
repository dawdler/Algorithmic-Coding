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
string given;
cin>>given;
cout<<org<<endl;
cout<<given<<endl;
int j;
//check for the original string
if(given.length()<org.length()) { cout<<"No"<<endl; return 0; }

for(int i=0;i<org.length();++i) { 
bool flag1=false,flag2=false;
j=i;
bool found=false;

while(j<=given.length()) { 
if(org[i]==given[j]) break;  
else { if(given[j]=='<') flag1=true;
if(given[j]=='3') flag2=true;
if(flag1 && flag2) { cout<<"No"<<endl; return 0;}
++j;  }
}
cout<<"Yes"<<endl;
}



return 0;
}

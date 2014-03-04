#include<iostream>
#include<string>

using namespace std;


int main() { 
string s;
cin>>s;
int one=0,zero=0;
for(int i=0;i<s.length();++i) { 
if(s[i]=='0') { 
++zero;
one=0;
if(zero>=7) { cout<<"YES"<<endl; return 0;}

}

else { 
++one;
zero=0;
if(one>=7) { cout<<"YES"<<endl; return 0;}
}

}

cout<<"NO"<<endl;
return 0;
}

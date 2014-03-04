#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main() { 
int k,d;
cin>>k>>d;

if(d==0) { 
if(k==1){ 
cout<<"0"<<endl; return 0; }
else { cout<<"No solution"<<endl;  return 0; }
}
string ans;
if(k>=d){    
for(int i=0;i<d;++i) ans+='1';
for(int i=0;i<(k-d);++i) ans+='0';
cout<<ans<<endl;}
else  { 
if(k==1) { cout<<d<<endl;  return 0; }
int temp=d-1;
std::string s;
std::stringstream out;
out << temp;
s = out.str();


ans+=s;
ans+="1";
for(int i=0;i<(k-2);++i) ans+="0";
cout<<ans<<endl;
}
return 0;

}

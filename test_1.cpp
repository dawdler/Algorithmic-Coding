#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main() { 
/*int temp=5;
string ans="1";
string temp1=to_string(temp);
*/

string ans="1";
int i = 5;
std::string s;
std::stringstream out;
out << i;
s = out.str();
ans+=s;
cout<<ans<<endl;
return 0;

}

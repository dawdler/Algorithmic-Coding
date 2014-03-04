#include<iostream>
#include<string>
using namespace std;
#define MAX 4
int main()
{
int list[MAX]={0};
string s,result;
int count1=0,count2=0;
cin>>s;
for(int i=0;i<s.length();i+=2) { 
	list[s[i]-'0']++;
		++count1;
		}
--count1;
for(int i=1;i<=3;++i) { 
	for(int j=0;j<list[i];++j) { 
	cout<<i;
	if(count2<count1) { cout<<"+"; ++count2;  }
	else continue;
	}
	}
cout<<endl;
return 0;
}


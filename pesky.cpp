#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string word;
int cnt=0;
void check(int i,int j) {
	int c=j,flag=0;
	for(int a=i;a<c;++a,--c) {
		if(word[a]!=word[c]) { flag=0; break; }

	          else flag=1;
}
if(flag) ++cnt;
}

		
int main()
{
int len;
while(cin>>word) {
	cnt=0;
	len=word.length();
	for(int i=0;i<len;++i) {
		for(int j=0;j<len;++j) {
		check(i,j);
	}
}
cout<<cnt<<endl;
}
return 0;
}
		

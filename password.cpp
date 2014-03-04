#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main()
{
int maxcount,len;
string text,temp;
string max;
map<string, int>mp;
while(cin>>len>>text) {
	mp.clear();
	maxcount=-1;
	int end=text.length()-len+1;
	for(int i=0;i<end;++i) {
		temp=text.substr(i,len);
	mp[temp]++;
	if(mp[temp]>maxcount) {
		maxcount=mp[temp];
		max=temp;
		}
	}
	printf("%s\n",max.c_str());
}
return 0;
}


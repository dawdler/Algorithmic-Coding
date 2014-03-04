#include<iostream>
#include<cstring>
using namespace std;

#define MAX 27
int map1[MAX];
int main()
{

char name[101];
int count=0;
cin>>name;
//cout<<name[0]-'a';
for(int i=0;i<strlen(name);++i) {
		map1[name[i]-'a']++;
		}
for(int i=0;i<27;++i) {
		//cout<<map1[i]<<" ";
		if(map1[i]>=1) ++count;
	}
	//cout<<endl<<count;
	if(count%2==0) {
	cout<<"CHAT WITH HER!"<<endl;
	}
else cout<<"IGNORE HIM!"<<endl;
	
	
	return 0;
	}

#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
using namespace std;
	#define MAX 1001
int main() 
{
char letters[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char s1[MAX];
char s2[MAX];
int count1[26]={0};
int count2[26]={0};
cout<<(char)'a'+0<<endl;
while(scanf("%s\n%s",s1,s2)!=EOF) {
memset(count1,0,26);
memset(count2,0,26);

	for(int i=0;i<strlen(s1);++i) count1[s1[i]-'a']++;
	for(int i=0;i<strlen(s2);++i) count2[s2[i]-'a']++;
for(int i=0;i<26;++i) cout<<count1[i]<<" ";
cout<<endl;
for(int i=0;i<26;++i) cout<<count2[i]<<" ";
cout<<endl;
for(int i=0;i<26;++i) {
	if(count1[i]!=0 && count2[i]!=0) {
		if(count1[i]==count2[i]) {
		cout<<letters[i];  }
		else  {
			if(count1[i]>=1 && count2[i]>=1) cout<<tolower(letters[i]); }
		}
	}
cout<<endl;

}
return 0;
}


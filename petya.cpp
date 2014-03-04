#include<iostream>
#include<cstring>
//#include<ctype>
#define MAX 110
using namespace std;

int main()
{
int i,test;
char first[MAX];
char second[MAX];
cin>>first>>second;
for(i=0;i<strlen(first);++i) first[i]=toupper(first[i]);
first[i]='\0';
for(i=0;i<strlen(second);++i) second[i]=toupper(second[i]);
second[i]='\0';
//cout<<first<<" "<<second<<endl;
test=strcmp(first,second); 
if(test<0) cout<<"-1";
else if(test>0) cout<<"1";
else cout<<"0";
return 0;
}




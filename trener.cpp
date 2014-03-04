#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main() { 
int n;
int flag=0;
cin>>n;
char temp[200];
int hash[30]={0};
for(int i=0;i<n;++i) { 
cin>>temp;
hash[temp[0]-'a']++;
}

for(int i=0;i<26;++i) { 
if(hash[i]>=5) { 
printf("%c",i+97);
flag=1;
}

}
if(!flag) printf("PREDAJA");

return 0;
}

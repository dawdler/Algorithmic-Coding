#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
string S[1025*1025];int main(){int test;cin>>test;cin>>S;
string *beg=&S[0];string *last=&S[4];
while(test--) {
reverse(beg,last);
cout<<S;cout<<" ";
}
return 0;
}



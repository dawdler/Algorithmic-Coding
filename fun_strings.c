#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdio.h>

using namespace std;
int main()
{
//string s1;
char s2[100];
int s;
//getline(cin,s1);
gets(s2);

s=strlen(s2);
std::sort(s2,s2+s);
cout<<s2<<s;
return 0;
}


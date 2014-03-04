#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define MAX 300000 

int main()
{
int a=0;
char s[MAX],t[MAX];
while(scanf("%s %s",s,t)!=EOF) {
	a=0;
for(int i=0;i<strlen(t);++i) {
	if(s[a]==t[i]) {
			++a;
			}
	}
if(a==strlen(s)) printf("Yes\n");
else printf("No\n");
}
return 0;
}

	

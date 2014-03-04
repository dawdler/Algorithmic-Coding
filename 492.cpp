e<iostream>
#include<cctype>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
#define MAX 100
#define V 1
#define C 2
int isvowel(char ch) {
	int flag=0;
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
	flag=1;
return flag;
}

int main()
{
char ch,save;
int n;
while(1){
n=scanf("%c",&ch);
if(n!=1) 
	break;
	if(isvowel(ch)) {
		printf("%c",ch);
		while(1) {
			scanf("%d",&ch);
			if(!isalpha(ch)) break;
			printf("%c",ch);
			}
			printf("ay%c",ch);
	}
	else if(isalpha(ch)) {
		save=ch;
			while(1)
			{
	scanf("%c",&ch);
	if(!isalpha(ch))
		break;
		printf("%c",ch);
		}
	printf("%cay%c",save,ch);
	}
	else 
	printf("%c",ch);
	}
	return 0;
}




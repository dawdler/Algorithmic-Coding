
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
#define MAX 101
int main()
{
int a=0;
char hello[]={'h','e','l','l','o'};
char word[MAX];
scanf("%s",word);
//printf("%s",word);
for(int i=0;i<strlen(word);++i) {
		//printf("%c %c\n",hello[a],word[i]);
		if(hello[a]==word[i]) {
				++a;
			}
if(a==5) break;
}

//printf("%d\n",a);
if(a==5) printf("YES\n");
else printf("NO\n");
return 0;
}



#include<stdio.h>
#define MAX 300
int main()
{
char str[200];
int list[MAX]={0};
int i;
char find,ch;
gets(str);
for(i=0;i<strlen(str);++i) {
			ch=str[i];
		list[(int)ch]++;
}
scanf("%c",&find);
printf("%d",list[(int)find]);
return 0;
}


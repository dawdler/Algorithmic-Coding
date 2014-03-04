#include<stdio.h>
//#include<string.h>
#define MAX 300

int main()
{
char ch;
char find; 
int list[MAX]={0};
while((ch=getchar()) !=EOF) {
		  	
			list[(int)ch]++;
}
//fflush(stdin);
find=getchar();
//printf("%c\n",find);printf("%d\n",(int)find);
//scanf("%c",&find);
printf("%d",list[(int)find]);
return 0;
}



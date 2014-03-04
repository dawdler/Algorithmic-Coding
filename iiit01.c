#include<stdio.h>
#define MAX 1000000
#include<string.h>
int main(){
	int len;
 char digit[MAX],newd[MAX];
gets(digit);
strcpy(newd,digit);
len=strlen(digit);
printf("len:%d\n",len);
printf("NEwd:%s\n",newd);
len=len-1;
if(digit[len]=='4') {
			printf("I am here\n");
newd[len]='7';
printf("%s", newd);
}
if((digit[len]=='7') && (digit[len-1]!='7')) {
			newd[len]='4';
			newd[len-1]='7';
			printf("%s",newd);
}

return 0;
}


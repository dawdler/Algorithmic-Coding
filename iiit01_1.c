#include<stdio.h>
#define MAX 1000000
#include<string.h>
int main(){
	int len,len1;
int j,i,flag=1;
int t;
 char digit[MAX],newd[MAX];

flag=1;
gets(digit);
strcpy(newd,digit);
len=strlen(digit);
i=len-1;
len1=len;
while(len) {
	if(digit[i]=='4') {
			flag=0;
			newd[i]='7';
			printf("%s\n",newd);
			break;
}
else  {
		newd[i]='4';
		i--;
}
len--;
}
if(flag==1) { 
		for(j=0;j<len1+1;++j) 	{ printf("4");  }

}


return 0;
}



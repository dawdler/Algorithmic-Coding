#include<stdio.h>
#include<string.h>
int main()
{
char s[12];
int l,n;
int i;
scanf("%d",&n);
for(i=0;i<n;++i) {

scanf("%s",s);
l=strlen(s);
if(s[l-1]%2!=0) 
	s[l-1]--;
printf("%s\n",s);
}
return 0;
}


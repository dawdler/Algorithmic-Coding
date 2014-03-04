#include<stdio.h>
#include<string.h>

int main()
{
int t,n,i,j,k,flag=0,count=0;
char user[100][20];
char ch[100][1];
scanf("%d",&t);
for(i=0;i<t;++i) {
	scanf("%d",&n);
	for(j=0;j<n;++j) {
		scanf("%s%s",user,ch);
	}
for(j=0;j<n;++j) {
	if(j==0) {
			if(!strcmp(ch[j],'+')) { ++count; /*continue;*/ }
			else { --count; /*continue;*/ }
}
else {
	for(k=0;k<j;++k) {
		flag=1;
		if(!strcmp(user[j],user[k])) {
			if(!strcmp(ch[j],ch[j])) count=count;
			else {
				if(!strcmp(ch[j],'+') count=count-1
				else count=count+1;
				}

			}
}
if(flag!=1) {
		if(!strcmp(ch[j],'+')) ++count;
		else --count;
}
}
printf("%d",count);
}
return 0;
}
			






#include<stdio.h>
int flag=0;
inline int fastinput()
{
flag=0;
int input=0;
int t=0;
char c;
while(c<33) c=getchar_unlocked();
while(c>33) {
		if(c=='.') flag=1;
		if(c!='.') {
		input=input*10+c-'0'; }
c=getchar_unlocked();
}

return(input);
}
int main(void) {
int t;
int  count_seven=0,count_four=0;
int num;
int four=1,seven=1;
int balls;
scanf("%d",&t);
while(t--)
{
num=fastinput();
//printf("%d\n",fastinput());

if(flag!=1) balls=num/10*6+num%10;
else balls=num*6;
printf("Balls:%d\n",balls);
while(1) {
		four=four*4;
	printf("%d",four);	
		seven=seven*7;
	if(four>balls) break;
	if(four==seven) { ++count_seven; continue; }		
if(four<=balls) ++count_four;
		if(seven<=balls) ++count_seven;
}
		
printf("%d\n",count_four);
printf("%d\n",count_seven);
}


return 0;
} 

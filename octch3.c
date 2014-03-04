#include<stdio.h>
//#include<conio.h>
#define MAX 20010
int main ()
{
int t,i;
int temp,new_num,rem;
char num1[MAX],num2[MAX];
int num3=0;
scanf("%d",&t);
while(t--) {
num3=0;
gets(num1);
gets(num2);
for(i=0;i<strlen(num1);++i) {
		if(num1[i]>num2[i]) num3=num3*10+num1[i]-'0';
		else num3=num3*10+num2[i]-'0'; 
}
//printf("%d\n",num3);
temp=num3;
new_num=0;
while(temp!=0) {
			rem=temp%10;
			if((rem==4) || (rem==7)) {
					new_num=new_num*10+rem;
			}
		temp=temp/10;
}
if(rem==0) { printf("\n"); }
	else printf("%d\n",new_num);
}
return 0;
}




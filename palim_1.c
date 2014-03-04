#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[1000002];
int test,i,f,fp,l,mid;
scanf("%d\n",&test);
while(test--)
{
f=1;
gets(a);
l=strlen(a);
//printf("len:%d\n",l);
fp=0;
for(i=0;i<l;i++) //checking for 99999
{
if(a[i]!='9')
{
f=0;
//printf("%d\n",i);
break;
}
}
if(f==1)
{
a[0]='1';
for(i=1;i<l;i++)
a[i]='0';
a[l]='1';
a[l+1]='\0';
fp=1;
}
//generating palimdrone for other numbers
f=0;
if(fp!=1)
{//printf("l/2:%d\n",l/2);
for(i=0;i<l/2;i++)
{

if(a[i]<a[l-1-i]) //check if the generated palimdrome is greater then then number given or not
f=-1;
else if(a[i]>a[l-1-i])
f=1;
a[l-1-i]=a[i]; // copy the first half digits of the number into second half(mid is the separating point)
//printf("l-1-i:%d\n",l-1-i);
//printf("%s\n",a);
}
if(l%2==0)
mid=l/2-1;
else mid=l/2;
//printf("Mid:%d\n",mid);
if(f==0||f==-1)

{
i=0;
while(a[mid-i]=='9')
{
a[mid-i]='0';
a[l-1-mid+i]='0';
i++;
}
a[mid-i]++;//increase the value of a[mid]by 1.incase if a[mid] is 9 then the value of a[mid-i] will be increased by 1 n a[mid] will be 0 and it will continue until any of digit is 9
a[l-1-mid+i]=a[mid-i];
}
}
printf("%s\n",a);
}
return 0;
}

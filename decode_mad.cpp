#include<stdio.h>
#include<string.h>
int main()
{
char a[81]="QWERTYUIOP{}|ASDFGHJKL:ZXCVBNM<>?`1234567890-=qwertyuiop[]zxcvbnm,./asdfghjkl;'",b[5000];

int c,d,e;
gets(b);
e=strlen(b);

for (c=0;c<e;c++)
{
if (b[c]==' ')
{
printf(" ");
continue;
}
for (d=0;d<81;d++)
{
if (b[c]==a[d])
{
b[c]=a[d-2];
printf("%c",b[c]);
}
}
}

printf("\n");
return 0;
}

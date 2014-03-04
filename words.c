#include<stdio.h>
main()
{
int whitespCt=0,chCt=0,digits[10],i;
char ch;
for(i=0;i<10;i++)
digits[i]=0;
printf("Enter something (` to stop)\n");
while((ch=getchar())!='0'){
if(ch>='0'&&ch<='9')
digits[ch-'0']++;
else if(ch==' '||ch=='\n'||ch=='\t')
whitespCt++;
else
chCt++;
}
for(i=0;i<10;i++)
printf("\nNo. of %2d= %d",i,digits[i]);
printf("\nNo. of white spaces= %d",whitespCt);
printf("\nNo. of other characters = %d",chCt);
return 0;
}


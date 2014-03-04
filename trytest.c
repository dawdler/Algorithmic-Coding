#include<stdio.h>

int main()
{
char p;
p=getchar_unlocked();
int n=0;
n=n<<3+n<<1+p-'0';
printf("%d",n);
return 0;
}



#include<stdio.h>
/*inline int inp()
{
int n=0;
char p=getchar_unlocked();
while(p>='0'&&p<='9')
{
n = (n<< 3) + (n<< 1) + (p - '0');
p=getchar_unlocked();
};
return n;
};*/
int main()
{
int t,n,i,res;
int temp,count=0;

//t=inp();
scanf("%d",&t);
for(i=0;i<t;++i) {
//		n=inp();
scanf("%d",&n);
		temp=1;
		while(temp<=n) {
			++count;
			temp*=2;
			}
--count;
//printf("%d",count);
//printf("%c\n",list[count]);
//printf("%d\n",temp/2);
printf("%d\n",2<<(count-1));
count=0;
}
return 0;
}



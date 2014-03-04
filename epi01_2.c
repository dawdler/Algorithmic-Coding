#include<cstdio>
#include<cmath>

int main()
{
int temp,count=0;
int rem,n;
int count1=0;
scanf("%d",&n);
temp=n;
while(1) {
		if ((n==1) ||(n==2)) {
					++count1;
					break;}
count=0;
while(temp!=1) {
		temp=temp/2;
		++count;
		}
printf("power of two:%d\n",count);
rem=n-pow(2,count);
printf("%d",rem);
n=rem;
++count1;
}
printf("\n%d",count1);

return 0;

}


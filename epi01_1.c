#include<cstdio>
#include<cmath>
int main()
{
int n;
int count1=0;
int count=0;
int temp;
int sub;
scanf("%d",&n);
while(n!=0){
		if((n==1) ||(n==2))  {
			++count1; break;}
temp=n;
count=0;
while(temp!=1) {
		temp=temp/2;
		++count;
		}
//printf("power of two:%d",count);
sub=pow(2,count);
n=n-sub;
++count1;
}
printf("%d",count1);
return 0;
}




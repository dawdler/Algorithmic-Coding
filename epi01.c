#include<cstdio>
#include<cmath>

int main()
{
//int temp;
int n;
int count;
int temp,count1;
count=0;
scanf("%d",&n);


	while(n!=0) {
			if((n==1) || (n==2)) {
						++count1;
						break;
}
temp=n;
//printf("temp:%d",temp);
while(temp!=1) {
		temp=temp/2;
		++count;
		}

//  printf("Count%d\n",count);

n=n-pow(2,count);
++count1;
}
printf("%d",count1);
return 0;
}



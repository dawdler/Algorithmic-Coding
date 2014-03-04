#include<cstdio>
#include<cmath>
int main()
{
int test;
long int i,j=0;
long num,temp;
scanf("%d",&test);
while(test--) {
		scanf("%ld",&num);
i=sqrt(num);
do {
	if(j*j>num) { printf("No\n");
	 		break; }
	temp=pow(i,2)+pow(j,2);
if(temp==num) printf("Yes\n");
if(temp<num) ++j;  
else i--; 
} while(i>0);
}
return 0;
}


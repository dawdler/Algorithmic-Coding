#include<stdio.h>
#include<math.h>
int main()
{
int n,count=1;
int nop;
int flag=1,decrease,increase;

while(1) {
		scanf("%d",&n);
		if(n==0) break;
if(n==1) {
	printf("Printing order for %d pages:\n",n);
		printf("Sheet %d, front: Blank, %d",1,1); continue; }
		
count=1;

decrease=n;
increase=0;
printf("Printing order for %d pages:\n",n);
	//		nop=ceil(n/4);
				if(n%4!=0) {
						flag=0;nop=n/4+1;
}
else nop=n/4;

			while(count<=nop) {
		
						if(flag==0) {
					flag=1;
								printf("Sheet %d, front: Blank, %d\n",count,++increase);
								printf("Sheet %d, back: %d, Blank\n",count,++increase);
}
else {
printf("Sheet %d, front: %d, %d\n",count,decrease--,++increase);
printf("Sheet %d, back: %d, %d\n",count,++increase,decrease--);
  }
++count;  
}

}
return 0;
}


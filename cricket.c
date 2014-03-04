#include<stdio.h>
#include<cmath>
int main()
{
int t,balls=0;
//char ch;
//int flag=0;
int num1;
int ovr;
int i,j;
float num;
//char str[10];
scanf("%d",&t);
while(t--) {
			scanf("%f",&num);
			printf("New num%d\n",(int)(num*100+0.5)/100.0);			
			ovr=(int)num;
			//num=num*10;
			//printf("num%0.f",num);
			//num1=(int)(num*10)%10;			
//printf("Over:%d\n",ovr);
			//printf("floor%d\n",floor(num*10));
			//num1=floor(num*100)-ovr*100;
			//printf("Num1:%d\n",num1);
			//num=(num-(float)ovr)*10;
			//printf("new num\n%f",num);			
balls=ovr*6+(int)num1;

}
		//gets(str);

/*		ch=getchar();ovr=ch-'0';
		if(ch=='.') { 	flag=1; continue; }		
if(flag==0) balls=balls+ovr*6;
else balls=balls+ovr;
}*/
printf("%d",balls);
return 0;
}


		

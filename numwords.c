#include<stdio.h>
#include<math.h>
int print(int);
int printy(int);
int hund(int);
int thou(int);
int lev(int);
int main()
{
	int i,a,b,c,d,p;
	//printf("Enter a number(max 4 dijits) sweetheart...\n");
	scanf("%d",&i);
	
	if(i!=10000)
	{
	a=i%10;
	i=i/10;
	b=i%10;
	i=i/10;
	c=i%10;
	i=i/10;
	d=i%10;
	
	p=thou(d);
	p=hund(c);
	if(b!=1)
	{
		p=printy(b);
		p=print(a);
	}
	if(b==1)
	p=lev(a);
	}
	else
	printf("Ten thousand\n");
	return 0;
}
int thou(int x)
{
	if(x!=0)
	{
		if(x==1)
		printf("One Thousand ");
		if(x==2)
		printf("Two Thousand ");
		if(x==3)
		printf("Three Thousand ");
		if(x==4)
		printf("Four Thousand ");
		if(x==5)
		printf("Five Thousand ");		
		if(x==6)
		printf("Six Thousand ");
		if(x==7)
		printf("Seven Thousand ");
		if(x==8)
		printf("Eight Thousand ");
		if(x==9)
		printf("Nine Thousand ");
	}
	return 0;
}
int hund(int x)
{
	if(x!=0)
	{
		if(x==1)
		printf("One Hundred ");
		if(x==2)
		printf("Two Hundred ");
		if(x==3)
		printf("Three Hundred ");
		if(x==4)
		printf("Four Hundred ");
		if(x==5)
		printf("Five Hundred ");		
		if(x==6)
		printf("Six Hundred ");
		if(x==7)
		printf("Seven Hundred ");
		if(x==8)
		printf("Eight Hundred ");
		if(x==9)
		printf("Nine Hundred ");
	}
	return 0;
}
int printy(int x)
{
	if(x!=0)
	{
		if(x==2)
		printf("Twenty ");
		if(x==3)
		printf("Thirty ");
		if(x==4)
		printf("Forty ");
		if(x==5)
		printf("Fivty ");		
		if(x==6)
		printf("Sixty ");
		if(x==7)
		printf("Seventy ");
		if(x==8)
		printf("Eighty ");
		if(x==9)
		printf("Ninety ");
	}
	return 0;
}
int print(int x)
{
	if(x!=0)
	{
		if(x==1)
		printf("One\n");
		if(x==2)
		printf("Two\n");
		if(x==3)
		printf("Three\n");
		if(x==4)
		printf("Four\n");
		if(x==5)
		printf("Five\n");		
		if(x==6)
		printf("Six\n");
		if(x==7)
		printf("Seven\n");
		if(x==8)
		printf("Eight\n");
		if(x==9)
		printf("Nine\n");
	}
	return 0;
}
int lev(int x)
{
		if(x==0)
		printf("Ten\n");
		if(x==1)
		printf("Eleven\n");
		if(x==2)
		printf("Twelve\n");
		if(x==3)
		printf("Thirteen\n");
		if(x==4)
		printf("Forteen\n");
		if(x==5)
		printf("Fivteen\n");		
		if(x==6)
		printf("Sixteen\n");
		if(x==7)
		printf("Seventeen\n");
		if(x==8)
		printf("Eighteen\n");
		if(x==9)
		printf("Nineteen\n");
	return 0;
}

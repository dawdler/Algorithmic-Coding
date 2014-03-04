#include<stdio.h>
inline int fastinput()
{
int cc = getchar_unlocked(), value = 0;
 
while(cc < '0' || cc > '9')
cc = getchar_unlocked();

while(cc >= '0' && cc <= '9')
{
value = value * 10 + cc - '0';
cc = getchar_unlocked();
}
 
return value;
}

int main()
{
int a,b,player=0,max,c;
int R;
int i;
int new,c1,c2,result;
int winner;
max=0;
//scanf("%d",&R);
R=fastinput();
//printf("%d\nR:",R);
for(i=0;i<R;++i) {
	//scanf("%d",&a);
	//scanf("%d",&b);
//	lead=0;player=0;new=0;
	a=fastinput();
	
	b=fastinput();
	c1+=a;
	c2+=b;
	result=c1-c2;
	if(result>0) {   //if player 1 has the lead
			
			player=1; 
			}
	else if(result<0) { 	
			player=2;
			result*=-1;    }
	if(result>max) {
		winner=player;
		max=result;
		printf("max:%d\n",max);    }

		
	/*else {
				new=-(a-b);
				                   
				//lead=-c;
				if(new>lead) {
				lead=new;
				player=2;   
					}
}*/
}
printf("%d %d\n",winner,max);
return 0;
}



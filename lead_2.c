#include<stdio.h>
inline int fastinput()
    {
    int input=0;
    char c=0;
    while(c<33) { c=getchar_unlocked(); }
    while(c>33)
    {
    input=input*10+c-'0';
	    c=getchar_unlocked();
    }
    return input;
    }

int main()
{
int a,b,player;
int r;
int i;
int new,c1,c2,result=0;
int winner;
new=0;
r=fastinput();
//scanf("%d",&r);
for(i=0;i<r;++i) {
	a=fastinput();
	b=fastinput();
	//scanf("%d",&a);
	//scanf("%d",&b);
	c1+=a;
	c2+=b;
	result=c1-c2;
	//printf("%d:%d\n",i,max);
	if(result>0) {   //if player 1 has the lead
			
			player=1; 
			}
	if(result<0) { 	
			player=2;
			result*=-1;    }
	if(result>new) {
		winner=player;
		new=result;
		//printf("max:%d\n",max); 
   }
}
printf("%d %d\n",winner,new);
return 0;
}


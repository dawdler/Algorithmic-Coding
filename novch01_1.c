#include<stdio.h>
#define TRUE 1
#define FALSE 0

int main()
{
int t,rounds,I,N,Q;
int i,state,countF=0,countT=0;
scanf("%d",&t);
while(t--) {
countF=0;countT=0;
scanf("%d",&rounds);
while(rounds--) {
countF=0;countT=0;
scanf("%d%d%d",&I,&N,&Q);
countT=N/2;
countF=N-countT;
if(I==1) {
			if(Q==1)  printf("%d\n",countT);
			else printf("%d\n",countF);
}
 
	if(I==2) {
			if(Q==1)  printf("%d\n",countF);
			else printf("%d\n",countT);
}

		}
}
return 0;
}


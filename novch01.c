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
for(i=N;i>0;--i) {
		if(I==1) { state=TRUE; }
			else state=FALSE;
		if((i%2)!=0) {   //change the state
				
				if(state==TRUE) 	{
						state=FALSE;
						++countF;
			}
			else {
				state=TRUE;
				++countT;
		}
}
else {
                 if(state==TRUE) ++countT;
			else ++countF;
}
}
if(Q==1) printf("%d\n",countT);
else printf("%d\n",countF);
}
}
return 0;
}



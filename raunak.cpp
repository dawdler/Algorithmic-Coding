#include<stdio.h>
int main()
{
int res;
int i,t,U,N,M,C;
float D,R;
float cost;
scanf("%d",&t);
while(t--)
{
res=0;
scanf("%f%d%d",&D,&U,&N);
cost=D*U;
for(i=0;i<N;i++)
{
//printf("hi ");
scanf("%d%f%d",&M,&R,&C);
if(((C/(M*1.0))+U*R)<cost)
{
cost=((C/(M*1.0)))+U*R;
res=i+1;
}
}
printf("%d\n",res);
}
return 0;
}

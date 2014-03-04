#include<stdio.h>
#include<stdlib.h>


long long parent[20009], cost[20009];
void calc(int i)
{
if(parent[i]==i)
return;
else
{ calc(parent[i]);
cost[i]+=cost[parent[i]];
parent[i]=parent[parent[i]];
}
}

int main()
{

int i,t,n,temp,temp1;
char ch;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<=n;i++)
parent[i]=i,cost[i]=0;
while(1)
{
scanf("%c",&ch);
switch(ch)
{
case 'E':
scanf("%d",&temp);
calc(temp);
printf("%d\n",cost[temp]);
break;
case 'I':
scanf("%d%d",&temp,&temp1);
cost[temp]= cost[temp1]+(abs(temp-temp1)%1000);
parent[temp] = parent[temp1];
break;
case 'O':
return 0;
}
}
}

return 0;
}

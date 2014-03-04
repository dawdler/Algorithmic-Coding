                                             
#include<stdio.h>
int n,dest=0,src;
#define inf 9999899
#define nil -1
#define temp 0
#define perm 1
int predecessor[1000];
int pathlength[1000];
int status[1000];
int adj[400][400];
void findpath(int,int);
void Dijkstra(int);
int min_temp();
int main()
{
int i,j;
src=2;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
scanf("%d",&adj[i][j]);
}
Dijkstra(src);
findpath(src,dest);
return 0;
}
void Dijkstra(int s)
{
int i,current;
for(i=1;i<=n;i++)
{
predecessor[i]=nil;
pathlength[i]=inf;
status[i]=temp;
}
pathlength[s]=0;
while(1)
{
current=min_temp();
if(current==nil)
return;
dest=current;
status[current]=perm;
for(i=1;i<=n;i++)
{
	if(adj[current][i]!=0 && status[i]==temp)
	{predecessor[i]=current;pathlength[i]=pathlength[current]+adj[current][i];}
}
}
}
int min_temp()
{
int i;
int min=inf,k=nil;
for(i=1;i<=n;i++)
{
if(status[i]==temp && pathlength[i]<min)
{min=pathlength[i];k=i;}
}
return k;
}
void findpath(int s,int v)
{
int i,u;
int path[1000];
int shortdis=0,count=0;
while(v!=1)
{
count++;
path[count]=v;
u=predecessor[v];
shortdis+=adj[u][v];
v=u;
}
shortdis+=adj[1][dest];
count++;
path[count]=1;
printf("%d\n",shortdis);
for(i=count;i>=1;i--)
printf("%d ",path[i]);
//printf("1\n");
}



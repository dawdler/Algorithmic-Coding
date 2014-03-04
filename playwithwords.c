#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
 
#define SIZE 26
 
int visited[SIZE]={0};
int present[SIZE]={0};
 
typedef struct
{
	int rel[SIZE][SIZE];
	int out[SIZE];
	int in[SIZE];
} graph;
 
 
 
void create_graph(graph* g)
{
	int i,j;
	
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			g->rel[i][j]=0;
 
	for(i=0;i<SIZE;i++)
		g->out[i]=g->in[i]=0;
 
	for(i=0;i<SIZE;i++)
		visited[i]=present[i]=0;
}
 
 
void edge_connect(graph* g,int start,int end)
{
 
	g->rel[start][end]++;
	g->in[end]++;
	g->out[start]++;
	present[start]=1;
	present[end]=1;
}
 
 
void connection(graph* g,int index)
{
	
	int i=0;
 
	for(i=0;i<SIZE;i++)
	{
		if((g->rel[index][i]>0||g->rel[i][index]>0)&&visited[i]!=1)	
		{
			visited[i]=1;
			connection(g,i);
		}
	}
}	
 
 
 
int path(graph* g)
{
	int i,flag=0;	
		
	for(i=0;i<SIZE;i++)
		if(present[i])
		{
			visited[i]=1;
			connection(g,i);
			break;
		}
	
	for(i=0;i<SIZE;i++)
		if(present[i]==1&&visited[i]==0)
			return(0);
 
 
	for(i=0;i<SIZE;i++)
		{
			if(g->in[i]-g->out[i]==1)
				flag++;
 
			else if(g->out[i]-g->in[i]==1)
				flag++;
 
			else if(g->in[i]-g->out[i]!=0)
				return(0);
		}
 
	if(flag==2||flag==0)
		return(1);
 
	return(0);
}
 
 
int main()
{
 
	int i, j, lines, tests;
	graph* g;
	g=(graph *)malloc(1*sizeof(graph));
 
char c,f,s;
 
 
for (i=0,scanf("%d",&tests);i<tests;i++)
 
{
 
create_graph(g);
 
for (j=0,scanf("%d",&lines),getchar();j<lines;j++)
 
{
 
f=getchar();
 
while ((c=getchar())!='\n')
 
s=c;
 
edge_connect(g, f-'a', s-'a');
 
}
 
printf("%s\n",(path(g)==0?"The door cannot be opened.":"Ordering is possible."));
 
}
 
return 0;
 
}
 
			
 
 


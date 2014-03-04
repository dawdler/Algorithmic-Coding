#include<stdio.h>
#define MAX 100
#define TEMP 0
#define PERM 1
#define NIL -1
#define infinity 9999
void dijkstra(int);
//void path(int,int);
int min_temp();
int n,save;
int adj[MAX][MAX];
int predecessor[MAX];
int pathlength[MAX];
int status[MAX];
int sum=0;
int main()
{
int temp;
int s,v,i,j;	
scanf("%d",&n);
//creation of graph
for(i=0;i<n;++i) {
		for(j=0;j<n;++j) {
			
			scanf("%d",&temp); 
			//adj[i][j]=temp;
		if(temp==0) { 
			adj[i][j]=infinity; }
		else { 	
			adj[i][j]=temp; }
}
}
	
dijkstra(0);
printf("Sum:%d",sum);
//printf("save:%d\n",save);
//path(0,save-1);
return 0;
}

void dijkstra(int s) {
	int i,current;
for(i=0;i<n;++i) {
	predecessor[i]=NIL;
	pathlength[i]=infinity;
	status[i]=TEMP;
	}
pathlength[s]=0;
while(1) {
		current=min_temp();
printf("%d ",current);
if(current==NIL) return;
status[current]=PERM;
save=current;
for(i=0;i<n;++i) {
		if(adj[current][i]!=0 && status[i]==TEMP)

			if(pathlength[current]+adj[current][i]<pathlength[i]) {
		predecessor[i]=current;
		pathlength[i]=pathlength[current]+adj[current][i];
}
}
}

}
int min_temp() {
int i;
int min=infinity;
int k=NIL;
for(i=0;i<n;i++) {
		if(status[i]==TEMP &&pathlength[i]<min) {
		min=pathlength[i];
		k=i;
}
}
sum=sum+min;
return k;
}

/*void path(int s,int v) {
	int i,u;
int path[MAX];
int shortdist=0;
int count=0;
while(v!=s){
	count++;
	path[count]=v;
u=predecessor[v];
shortdist+=adj[u][v];
v=u;
}
count++;
path[count]=s;
printf("shortest path is:");
for(i=count;i>=1;i--) 
		printf("%d",path[i]);
printf("Shortest distance is:%d\n",shortdist);
}
*/



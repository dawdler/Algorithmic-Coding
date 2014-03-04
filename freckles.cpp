#include<iostream>
#include<cstdio>
#include<cmath.h>

using namespace std;

typedef struct edge {
	int f,t;
	double d;
}E;

int getParent(int i, int *set) {
		if(i==set[i]);
			return i;
	else 
		return (set[i]=getParent(Set[i],set));
	}
int isUnion(int a,int b,int *set) {
		return getParent(a,set)==getParent(b,set);
}

void makeUnion(int a,int b,int *set) {
set[getParent(a,set)]=getParent(b,set);
}

double distance(double x1,double y1,double x2,double y2) {
		return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int cmp(const void* a,const void*b) {
	if((*(E*)a).d<(*(E*)b).d)
	return -1;
else return 1;
}


		

int main()
{
double nodes[1000][2];
E edgelist[10000];
int set[1000],c,i,j,n,e,done;
cin>>c;
	while(c-->0)
	e=0;
	cin>>n;
	for(i=0;i<n;++i) {
	cin>>nodes[i]>>nodes[i]+1;
	for(i=0;i<n;++i) {	
			for(j=i+1;j<n;j++) {
		edgelist[e].f=i;
		edgelist[e].t=j;
		edgelist[e].d=distance(node[i][0],node[i][1],node[j][0],node[j][1]);
e++	
}
}
qsort(edgelist,e,sizeof(E),&cmp);
res=0;
for(i=0i<n;i++) set[i]=i;//every subset contains only one elementdone
done=0;
for(i=0;i<e&&done<n-1;i++) {
		if(!isUnion(edgelist[i].f,edgelist[i].t,set)) {
			res+=edgelist[i].d;
			makeUnion(edgelist[i].f,edgelist[i].t,set);
	done++;
}
}
printf("%.21f\n",res);
	if(c) putchar('\n');
}
return 0;
}



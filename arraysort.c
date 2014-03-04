#include<stdio.h>
#define MAX 1000000
#define TRUE 1
#define FALSE 2

int array[MAX];

void set(int v,int j,int k) {//update operation
		int a;		
			for(a=j;a<k;++a) array[a]=v-array[a];
}


int check(int j,int k) {//Query operartion

int a,asc=TRUE;
for(a=j;a<k;++a) { 
	if(array[a]==array[a+1]) continue;
else 
{
	if(array[a]>array[a+1]) asc=FALSE;
break;
} }
if(a==k) return 3;//when all r equal
	for(++a;a<k;a++) {
		if(asc) { if(array[a]>array[a+1]) return 0; }
		if(!asc) {if(array[a]<array[a+1]) return 0; }
 }
return asc?1:2;
}








int main()
{
int n,i,q;
int v,j,k;
scanf("%d %d",&n,&q);
for(i=0;i<n;++i) scanf("%d",&array[i]);
for(i=0;i<q;++i) {
	scanf("%d %d %d",&v,&j,&k);
	if(v!=0) set(v,j,k);
	else {
		//printf("I m here\n");
		printf("%d\n",check(j,k));
	}
}
return 0;
}


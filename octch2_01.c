#include<stdio.h>
#define MAX 110
int main()
{
int list1[MAX]={0},list2[MAX]={0};
int t,i;
int p1,l1,p2,l2,a;
int n,m;
int count=0;
scanf("%d",&t);
for(i=0;i<t;++i) {
count=0;
int list1[MAX]={0};
int list2[MAX]={0};
scanf("%d%d",&n,&m);
//printf("N:%d\n",n);
//printf("M:%d\n",m);
for(a=0;a<n;++a) {
//count=0;
		scanf("%d%d",&p1,&l1);
//	printf("I m here\n");		
if(list1[l1]!=0) {
				list1[l1]=list1[l1]+p1; }
	else  { list1[l1]=p1;  }
}

for(a=0;a<m;++a) {
		scanf("%d %d",&p2,&l2);
		if(list2[l2]!=0) {
				list2[l2]=list2[l2]+p2;  }
	else  {  list2[l2]=p2;  }
}
//main logic starts here

for(a=1;a<MAX;++a) {
	if(list1[a]<list2[a]) {
			count+=list2[a]-list1[a];
}
	
}
printf("%d\n",count);
}

return 0;
}


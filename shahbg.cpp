#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

#define MAX 20010

int main()
{
int p;
int list[MAX];
int Q,count=0;
memset(list,0,sizeof(list));
scanf("%d",&Q);
for(int i=0;i<Q;++i) {
		scanf("%d",&p);
		//p=p-1;
		list[p]=1;
		if(p==1 && list[p+1]==0) { ++count; }
		else if(p==20000 && list[p-1]==0) { ++count; }
		else if(list[p-1]==1 && list[p+1]==1) { --count;}
	else if(list[p-1]==0 && list[p+1]==0) ++count;
	//else if(list[p-1]==0 || list[p+1]==0) count=count;
//if(count<0) count=0;
printf("%d\n",count);		
}
printf("Justice\n");
return 0;
}

		



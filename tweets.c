#include<stdio.h>
#include<string.h>
//#include<conio.h>
#define MAX 1000
int count=0;
int main()
{

int  i,n,k;
int j;
int a;
char ans[10]={0};
int list[MAX]={0};
scanf("%d",&n);
scanf("%d",&k);
//fflush(stdin);
/*printf("n:%d\n",n);
printf("k:%d\n",k);
printf("count:%d\n",count);*/
for(i=0;i<k;++i) {
//printf("inside loop\n");
//fflush(stdin);
scanf("%s",ans);
if(strcmp(ans,"CLOSEALL")==0)  { memset(list,0,n);
//for(a=0;a<n;++a) list[a]=0;
count=0;
printf("%d\n",count); continue;   }

scanf("%d",&j);
if(list[j-1]==0) { 
		list[j-1]=1;  
		++count;
}
else {
	list[j-1]=0;
	--count;
}
printf("%d\n",count);
}
 return 0;
}


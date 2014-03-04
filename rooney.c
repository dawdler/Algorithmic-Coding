#include<stdio.h>
#define MAX 100000
/*inline int input() {
int n=0;
char p=getchar_unlocked();
while(p>='0'&&p<='9')
{
n = (n<< 3) + (n<< 1) + (p - '0');
p=getchar_unlocked();
};
return n;
};*/
int main()
{
int t,n,i,j,count=0,flag=0;
int num,previous,res;
int max=0;
scanf("%d",&t);
//t=input();
for(i=0;i<t;++i) {
		//n=input();
	scanf("%d",&n);
	int g[n];
		for(j=0;j<n;++j) {
			//num=input();	
		scanf("%d",&g[i]);
	}	
int j=g[0];
for(i=0;i<n;i++) {

	/*if(j==0) { previous=num; continue; }
			else {
				res=num-previous;
				if((res>0) && (res>count)) {
												      flag=1;					
count=res;
previous=num;
}
else previous=num;
				}
	}
if(flag!=1) printf("UNFIT\n");
else printf("%d\n",count);
count=0;res=0;previous=NULL,flag=0;
}*/


if(g[i]-j>max)
max=g[i]-j;
if(j>g[i])
j=g[i];
}
if(max==0)
printf("UNFIT\n");
else
printf("%d\n",max);
max=0;
}
return 0;
}


				


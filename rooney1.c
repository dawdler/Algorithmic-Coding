#include<stdio.h>
inline int inp()
{
int n=0;
char p=getchar_unlocked();
while(p>='0'&&p<='9')
{
n = (n<< 3) + (n<< 1) + (p - '0');
p=getchar_unlocked();
};
return n;
};
int main()
{
int t,n,i,j,count=0,flag=0;
int num,previous,res;
int max,k;
max=0;
//scanf("%d",&t);
t=inp();
for(i=0;i<t;++i) {
		n=inp();
	//scanf("%d",&n);
	int g[n];
		for(j=0;j<n;++j) {
			g[j]=inp();	
		//scanf("%d",&g[j]);
	}	
int k=g[0];
for(j=0;j<n;j++) {
if(g[j]-k>max)
max=g[j]-k;
if(k>g[j])
k=g[j];
}
if(max==0)
printf("UNFIT\n");
else
printf("%d\n",max);
max=0;
}
return 0;
}


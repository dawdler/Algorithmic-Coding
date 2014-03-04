#include<cstdio>
#include<cstring>
#define MAX 110
using namespace std;

int n[MAX],num,ans[MAX],final;
bool find;
char cha[]={'0','+','-','*','/'};

void dfs(long long int now,int p) {
	if(find)
		return;
	if(p>0 && (now>=32000 || now <=(-32000)))
		return;
	if(p==num-1) {
		if(find) return;
	else if(now==final) {
		printf("%d",n[0]);
		for(int i=1;i<num;i++) 
			printf("%c%d",cha[ans[i]],n[i]);
		printf("=%d\n",final);
		find=true;
			return;
	}
	else 
		return ;
	}
	else 
	{
	ans[p+1]=1;//for +
	dfs(now+n[p+1],p+1);
	ans[p+1]=2;//for -
	dfs(now-n[p+1],p+1);
	ans[p+1]=3;//for *
	dfs(now*n[p+1],p+1);
	ans[p+1]=4;
	dfs(now/n[p+1],p+1);
	}
	}

int main()
{
int c;
scanf("%d",&c);
while(c--) {
scanf("%d",&num);
	for(int i=0;i<num;++i) 
		scanf("%d",&n[i]);
	scanf("%d",&final);
	find=false;
dfs(n[0],0);
	if(!find) printf("NO EXPRESSION\n");
	}
	return 0;
}

	

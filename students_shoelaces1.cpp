#include<stdio.h>
#include<string.h>
#include<math.h>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<algorithm>
using namespace std;
#define maxv(A,B) (A>B?A:B)
#define minv(A,B) (A>B?B:A)
#define inf 2147483647
#define pi (2*acos(0.0))
#define eps 1e-9
int deg[105],vis[105][105],s[105];
vector<int>ve[105];
int main()
{
int n,m,i,j,p,q,f,cou,sum;
scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&p,&q);
		deg[p]++; deg[q]++;
		ve[p].push_back(q);
		ve[q].push_back(p);
	}
	sum=0;
	cou=n;
//	sort(deg,deg+n);
	while(cou>1)
	{
		f=0;
	for(i=1;i<=n;i++)
	{
		if(deg[i]==1&&s[i]==0)
		{
			cou--;
			deg[i]--;
			for(j=0;j<ve[i].size();j++)
			{
			    p=ve[i][j];
			    if(vis[i][p]==0&&vis[p][i]==0)
			    {     
				     s[p]=1;
				     f=1;
                         deg[p]--;
                         vis[i][p]=1; vis[p][i]=1;
			    }
			}
		}
	}
	if(f==1)
		sum++;
	else 
		break;
	memset(s,0,sizeof(s));
	}
	printf("%d\n",sum);
	return 0;
}

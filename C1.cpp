/*Author:Raunak Talwar MNNIT CSE 15 
-----------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------raunakrocks-------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------------------------------------------
*/
#include<cstdio>
#include<iostream>
#include<vector>
#include<queue>
#include<climits>
#include<cassert>
#include<cmath>
#include<cstring>
#include<map>
#include<stack>
#include<string>
#include<cstdlib>
using namespace std;
#define getx getchar_unlocked
#define pb push_back
#define mp make_pair
#define MAX(a,b) ((a >= b) ? (a) : (b))
#define MIN(a,b) ((a >= b) ? (b) : (a))
#define FOR(i,n) for(int i=0;i<(n);i++)
#define ABS(a) (((a) > 0) ? (a) : (-a))
#define DEB(n) cout<<"(<<< DEBUG "<<n<<" >>>)"<<endl
/*void inline inp(int &t)
{
	int sign=1;
	t=0;
	char ch=getx();
	while(ch<'0'||ch>'9')
	{
		if(ch=='-')
			sign=-1;
		ch=getx();
	}
	while(ch>='0'&&ch<='9')
	{
		t=(t<<3)+(t<<1)+(ch-'0');
		ch=getx();
	}
	t=t*sign;
}*/
int main()
{
	
	int n;
	//DEB(t);
//	inp(t);
//	while(t--)
	//{
		
	//}
	//inp(n);
	scanf("%d",&n);
	printf("%d\n",(int)ceil((n*n)/2.0));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i%2==0)
			{
				if(j%2==0)
					printf("C");
				else printf(".");
			}
			else
			{
				if(j%2==0)
					printf(".");
				else 
					printf("C");
			}
			//printf("\n");
		}
		printf("\n");
	}	
	
	
	
	
	return 0;
}

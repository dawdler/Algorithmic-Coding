#include<iostream>
#include<cmath>
#include<cstdio>
#define MAX 101
using namespace std;

 int main()
{
	int t,n,i,j,sum=0;
	int items[MAX];
	int m[MAX][12000];
	//	cin>>t;
		scanf("%d",&t);
		while(t--) {
         cin>>n;
	sum=0;
         	for(i=1;i<=n;++i) {
         		cin>>items[i]; sum+=items[i];
         	}
		for(i=0;i<n;++i) {
				for(j=0;j<=(sum/2);++j) {
					m[i][j]=0;                 }
}

		
for(i=1;i<=n;++i) {
		for(j=0;j<=(sum/2);++j) {
			if(j>=items[i])   m[i][j]=max(m[i-1][j],m[i-1][j-items[i]]+items[i]);
			else m[i][j]=m[i-1][j];					
}
}

cout<<abs((sum-m[n][sum/2])-m[n][sum/2])<<endl;

}



		/* code */
	return 0;
}

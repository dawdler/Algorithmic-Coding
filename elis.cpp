#include<iostream>
using namespace std;

int main()
{
int n;
int ls[25]={0},list[25]={0};
int max=0;

cin>>n;

for(int i=0;i<n;++i) cin>>list[i];
//LIS implementation
ls[0]=0;
ls[1]=1;
for(int i=1;i<n;++i) {
	for(int j=i-1;j>=0;j--)  {
				if(list[i]>list[j]) {
					if(ls[j]>max)
						max=ls[j];
			}
		}
	ls[i]=1+max;
	
}
for(int i=0;i<n;++i) cout<<ls[i]<<" ";
//cout<<ls[n-1];
return 0;
}


#include<iostream>
using namespace std;

#define MAX 101

int main()
{

int n,d[MAX];
int s,t,i;
int count=0;
int shortest=0;
int sum=0,sum1=0,diff;
int dest,source;
cin>>n;
for(i=1;i<=n;++i) { cin>>d[i]; }
		cin>>s>>t;
		if(s==t) { cout<<"0"<<endl; return 0; } //when source and dest is same 
		source=min(s,t);	
		dest=max(s,t);
		//cout<<"source:"<<source<<endl;
		//cout<<"Dest:"<<dest<<endl;
		for(i=source;i<dest;++i) {//clockwise direction
				//cout<<"i:"<<i<<endl;
				sum+=d[i];
				}
			//anti clockwise
			source=max(s,t);
			dest=min(s,t);
			diff=source-dest;
			i=source;
			//cout<<"Source:"<<source<<endl;
			//cout<<"Dest:"<<dest<<endl;
			while(1) {
			//	cout<<"i:"<<i<<endl;
				//	++count;
					if(i==dest) break;
					sum1+=d[i];
					if(++i>n) i=1;
					}
if(sum1<sum) { cout<<sum1<<endl; } 
else cout<<sum<<endl;
return 0;
}



					
		

		
				
		

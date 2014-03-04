#include<iostream>

using namespace std;
#define MAX 110
int main()
{
int t;
float D;
int U,N;
float final[MAX];
	float rates[MAX]={0.0};
	int months[MAX]={0};
float costs[MAX]={0};
cin>>t;
	while(t--) {
	 //final[MAX]={0.00};
	cin>>D>>U>>N;
	for(int i=0;i<N;++i) {
		cin>>months[i]>>rates[i]>>costs[i];
		}
		final[0]=D*float(U);
		for(int i=0;i<N;++i) {
			if(months[i]>1) {
				costs[i]=costs[i]/months[i];
				}
			final[i+1]=rates[i]*float(U)+costs[i];
		}
		//find out the min one from final array
	float min1=999999999.0;	
	int index=0;
	for(int i=0;i<N+1;++i) {
	if(final[i] < min1) {
		min1=final[i];
		index=i;
	}
	}
cout<<index<<endl;
}
return 0;
}
	
		

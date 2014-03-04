#include<iostream>
using namespace std;

#define MAX 110

int main()
{
int t;
int max=-1;
int U,N;
float D;
int months[MAX]={0},costs[MAX]={0};
float rates[MAX]={0.00};
	cin>>t;
	while(t--) {
	cin>>D>>U>>N;
	for(int i=0;i<N;++i) {
	cin>>months[i]>>rates[i]>>costs[i];
	
	if(months[i]>max) max=months[i];
	}
//calculate total for max month
float final[MAX];
final[0]=float(D*U*max);

int mins=U*max;
int temp1,temp2;
for(int i=0;i<N;++i) {
	if(months[i]<max) {
		while(months[i]<max) {
			temp1=months[i];
			months[i]+=temp1;
			temp2=costs[i];
			
			costs[i]+=temp2;
			}
		}
		final[i+1]=float(rates[i]*mins+costs[i]);
	}
float min=9999999999.00;
int index;
for(int i=0;i<N+1;++i) {
		cout<<final[i]<<endl;
if(final[i]<min) {
		min=final[i];
		index=i;
		}
}
cout<<index<<endl;
	}
return 0;
}


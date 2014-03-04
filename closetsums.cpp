#include<iostream>
#include<cmath>
#define MAX 1011
#define MAX1 2147483647
using namespace std;

int main()
{ 
int n;
int diff=MAX1;
int closet=0;
int count=0;
int sum,temp=0,Q,m;
int num[MAX];
	while(1)	 { 
	cin>>n;
	if(n==0) break;
	
	++count;
	cout<<"Case "<<count<<":"<<endl;
	for(int i=0;i<n;++i) cin>>num[i];
	cin>>m;
	for(int i=0;i<m;++i) { 
	cin>>Q;
	diff=MAX1;
	sum=0;
	closet=0;
	for(int j=0;j<n;++j) { 
	for(int k=j+1;k<n;++k) { 
	
	sum=num[j]+num[k];
	
	temp=abs(Q-sum);
	//cout<<"Sum: "<<sum<<" temp: "<<temp<<endl;
	if(temp<diff) {  
	//cout<<"i m here\n"<<endl;
closet=sum; diff=temp;  }
	

	}	
	}
	cout<<"Closest sum to "<<Q<<" is "<<closet<<"."<<endl;
	}
	}
	
	
return 0;	
} 

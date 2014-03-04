#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

#define MAX 100010

int gcd(int a,int b) { 
	int k;
	do {
	k=a;
	a=b%a;
	b=k;
	
	}while(a!=0);
	return k;
	}


int main()
{ 
int n;
int list[MAX];
cin>>n;
for(int i=0;i<n;++i) { 
	cin>>list[i];
	
	}
int start=0,distance=0;
int turn=0;
sort(list,list+n);
for(int i=0;i<n;++i) { distance+=abs(list[i]-start);
	start=list[i];
 }
do { 	
//	distance=0;
	start=0;
if(turn!=0) {
for(int i=0;i<n;++i) {  
	distance+=abs(list[i]-start);
	start=list[i];
//cout<<list[i]<<" ";
}
//	cout<<endl;
 }
	++turn;
	} while (next_permutation(list,list+n));
//cout<<distance<<endl;
//cout<<turn<<endl;
int gcd1=gcd(distance,turn);
	cout<<distance/gcd1<<" "<<turn/gcd1<<endl;
	

	return 0;
}	 
	


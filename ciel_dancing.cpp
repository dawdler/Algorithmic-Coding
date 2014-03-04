#include<iostream>
using namespace std;
struct pairg {
		int b;
		int g;
	}pair1[10001];
int main()
{
int boy[105]={0},girl[105]={0};
//int pairing[10001]={0};
int nb,ng;
int count=0;
cin>>nb>>ng;
for(int i=1;i<=nb;++i) {
	for(int j=1;j<=ng;++j) {
			if(boy[i]==0 || girl[j]==0) { //pair possible
				girl[j]=1;
				boy[i]=1;
				//pairing[i]=j;
				//cout<<i<<" "<<j<<endl;
				pair1[count].b=i;
				pair1[count].g=j;
				++count;
				
	}
	}
	}
cout<<count<<endl;
/*
	for(int i=1;i<10;++i) {
		if(pairing[i]!=0) {
			cout<<i<<" "<<pairing[i]<<endl;
			}
	}*/
	for(int i=0;i<count;++i) {
		cout<<pair1[i].b<<" "<<pair1[i].g<<endl;
	}
return 0;
}



		


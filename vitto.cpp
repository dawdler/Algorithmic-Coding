#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define MAX 510
int main()
{
//cout<<"HElo shefu"<<endl;
int kase;
//scanf("%d",&kase);
cin>>kase;
int r,sum,sum1=0;
int med;
int relative[MAX];
while(kase--) {
sum=0;
sum1=0;
cin>>r;
for(int i=0;i<r;++i) { cin>>relative[i];sum+=relative[i]; }
sort(relative,relative+r);
med=r/2;
if(r%2==0) med=(relative[med-1]+relative[med])/2;
else med=relative[med];
//cout<<"Vito home position is:"<<med<<endl;
//calculate distance betw med n all remaining houses
for(int i=0;i<r;++i) {
	//temp=abs(med-relative[i]);
		
//cout<<"Distance betw his n relative"<<temp<<endl;
//sum1+=temp;
	
	sum1+=abs(med-relative[i]);
	
 }
cout<<sum1<<endl;
}
return 0;
}


#include<iostream>

#define MAX 10001
using namespace std;

int main()
{
int n,sum=0;
cin>>n;
int temp=n*n;
int list[temp+1];
list[0]=0;
//find total number of candies
for(int i=1;i<=temp;++i) {
	sum+=i;
	list[i]=1;
	}
//candy for one brother

int bro=sum/2;
//cout<<"bro:"<<bro<<endl;
while(1) {
	if(list[bro-temp]==1) {
			
			cout<<temp<<" "<<bro-temp;
			list[temp]=list[bro-temp]=2;
		//cout<<"I m here"<<endl;			
break;
		}
	else {
		cout<<temp<<" ";
		list[temp]=2;
		bro=bro-temp;
		--temp;
		}
	//cout<<"bro-temp:"<<bro<<endl;
	}
cout<<endl;
for(int i=1;i<=n*n;++i) {
		if(list[i]!=2) cout<<i<<" ";
	}
return 0;

}


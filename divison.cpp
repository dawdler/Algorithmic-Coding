#include<iostream>
#include<cstring>
using namespace std;
#define MAX 10
int list[MAX];
int check(int num,int deno) {
if(num>100000) return 0;	
memset(list,0,sizeof list);
while(num>0) {
	list[num%10]=1;
	num/=10;
	}
	while(deno>0) {
	list[deno%10]=1;
	deno/=10;
	}
int flag=1;
//for(int i=0;i<10;++i) cout<<list[i]<<" ";
//check whether all the digits r present or not 
	for(int i=1;i<10;++i) {
		if(list[i]!=1) {
			flag=0;
			break;
		}
	}

if(flag)  {     if(list[0]==0) return 2;
		else 
		return 1;  }
	else return 0;
}
	
	



int main()
{
int n,num,count1=0;
while(1) {
cin>>n;
if(n==0) break;
++count1;
if(count1>1) cout<<"\n";
	
int count=0;
for(int deno=1234;deno<=50000;++deno) {
	
	num=n*deno;
	int temp=check(num,deno);
	if(temp) {
		if(temp==2) {
			cout<<num<<" / "<<"0"<<deno<<" = "<<n<<endl;
		}
		else 
		cout<<num<<" / "<<deno<<" = "<<n<<endl;
		++count;	
	}

}
if(count==0) cout<<"There are no solutions for "<<n<<"."<<endl;
}
return 0;
}


#include<iostream>
using namespace std;
void check(int n) {
	long long int temp=n;
	int flag=0;
	int count_s=0,count_f=0;
	while(temp!=0) {
		temp=temp%10;
		if(temp==4) { ++count_f; flag=1; }
		if(temp==7) ++count_s;
		temp=temp/10;}
	if(flag==1 && count_f==count_s) { cout<<n<<endl;return; }// base condition
	else check(n+1);
}

int main()
{
int flag=0;
long long int n;
cin>>n;
check(n);
return 0;
}


#include<iostream>
using namespace std;

int sum(long n ) {
		long temp;
		temp=n;
		int digit,sum=0;
		while(temp!=0) {
			digit=temp%10;
			sum+=digit;
			temp=temp/10;
			}
		return sum;
}
			

int main()
{
long n,summ,temp;
while(1) {
	cin>>n;
	if(n==0) break;
	summ=n;
//cout<<sum(n);
	while((summ/10)!=0) {
		summ=sum(summ);
		}
		
cout<<summ<<endl;
}


return 0;
}
	





	

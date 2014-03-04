#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;

int x;
string a[100];

int main()
{
	char s[100];
	string temp;
	cout<<"Enter the String\n";
	cin>>s;
	int l=strlen(s);
	cout<<setfill('-');
	cout<<setw(l)<<"-"<<endl;
	cout<<setw(l)<<"-"<<endl;
	
	temp=s;
	for(int j=l/2;j>=0;j--)
	{
		cout<<temp<<endl;
		a[++x]=temp;
		temp[j]=' ';
		temp[l-j-1]=' ';
	}
	while(--x)
		cout<<a[x]<<endl;
	
	cout<<setw(l)<<"-"<<endl;	
	cout<<setw(l)<<"-"<<endl;
		
	return 0;
}

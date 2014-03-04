#include<iostream>
#include<cstring>
using namespace std;

int main()
{
int n;
int n1;
int x=0;
//string word;
char word[10];
cin>>n;
//n1=n-'0';
for(int i=0;i<n;++i) {
		cin>>word;
		if(!(strcmp(word,"++X")) || !(strcmp(word,"X++"))) ++x;  
			else --x ;	}

cout<<x;
return 0;
}

	

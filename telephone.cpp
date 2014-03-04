#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main()
{
int diction[100]={0};
diction[1]=1;
diction[0]=0;
int A=65,B,C,D,E,F;
for(int i=2;i<=6;++i) {
		diction[A]=diction[A+1]=diction[A+2]=i;
		A=A+3;		
}
A='P';
diction[A]=diction[A+1]=diction[A+2]=diction[A+3]=7;
A='T';
diction[A]=diction[A+1]=diction[A+2]=8;
A='W';
diction[A]=diction[A+1]=diction[A+2]=diction[A+3]=9;
///*diction[A]=diction[A+1]=diction[A+2]=diction[A+3]=9;
/*A='M',B='Y',C='L',D='O',E='V',F='E';	
cout<<diction[(int)A]<<diction[(int)B]<<diction[(int)C]<<diction[(int)D]<<diction[(int)E]<<diction[(int)F]; 
for(int i=65;i<=99;++i) {
		cout<<diction[i]<<" ";  }*/

char c;
while((c=getchar())!=EOF) {
	{
			if(c=='1') { cout<<"1";continue; }
			if(c=='-') { cout<<"-"; continue; }
			if(c=='\n') { cout<<"\n"; continue; }
			cout<<diction[(int)c];
}
}
	
return 0;
}


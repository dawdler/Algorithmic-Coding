#include<iostream>
using namespace std;
#include<string>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<queue>
#include<stdlib.h>


int main()
{
int N;
cin>>N;
while(N–!=0)
{
int L;
cin>>L;
int a[50];
for( int i=0; i!=L; ++i)
cin>>a[i];

int num=0;
for( int i=0; i!=L; ++i)
{
for( int j=L-1; j>=i+1; –j)
{
if( a[j]<a[j-1])
{
swap(a[j],a[j-1]);
++num;
}
}
}

cout<<”Optimal train swapping takes “<<num<<” swaps.”<<endl;
}

 

return 0;
}

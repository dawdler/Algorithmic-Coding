#include<iostream>
using namespace std;

int gcd(int a,int b) { 
int k;
do { 
k=a;
a=b%a;
b=k;
}while(a!=0);
return k;


}

int main() { 

int y,w;
cin>>y>>w;
int high;
if(y>w) high=y;
else high=w;

int no_a=6-high+1;
//print in irreducible fraction

int c=gcd(no_a,6);
cout<<no_a/c<<"/"<<6/c<<endl;

return 0;

}

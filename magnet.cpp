#include<iostream>
#define FALSE 0
#define TRUE 1

using namespace std;

int main(){
int n,num,prev,group=1;
cin>>n;
cin>>prev;
if(n==1) { cout<<"1"<<endl; return 0;}

for(int i=1;i<n;++i) { 
cin>>num;
if(num!=prev) ++group;
 prev=num;

}
cout<<group<<endl;

return 0;

}

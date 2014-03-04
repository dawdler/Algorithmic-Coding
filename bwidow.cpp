#include<iostream>

using namespace std;


int main() {
long long int inner[1010],outer[1010];
int t,n,flag;
long long int large_r;
cin>>t;
int index;
while(t--) {
large_r=-1;
flag=1;
index=-1; 
cin>>n;
for(int i=0;i<n;++i) { 
cin>>inner[i]>>outer[i];

if(inner[i]>large_r) { large_r=inner[i]; index=i;
}
}
//cout<<"\nlarge_r:"<<large_r<<endl;
for(int i=0;i<n;++i) { 
if(i!=index) {
if(outer[i]>large_r) { 
cout<<"-1"<<endl;
flag=0;
break;
}
}
}
if(flag) { 
//cout<<"large r:"<<large_r<<endl;
cout<<index+1<<endl;
}
}
return 0;
 }

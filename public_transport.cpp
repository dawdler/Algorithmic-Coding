#include<iostream>
using namespace std;


int main() { 
int buses[1010]={0};
int troll[1010]={0};
int c1,c2,c3,c4;
cin>>c1>>c2>>c3>>c4;
int n,m;
cin>>n>>m;
for(int i=0;i<n;++i) cin>>buses[i];
for(int i=0;i<m;++i) cin>>troll[i];

//cost for bus
int sum_b=0;
for(int i=0;i<n;++i) { 
if(c1*buses[i]>c2) {  
sum_b+=c2;
}
else sum_b+=(c1*buses[i]);
/*cout<<"c1.buses:"<<c1*buses[i]<<endl;
cout<<"c2:"<<c2<<endl;
cout<<"sum_b:"<<sum_b<<endl;*/
}
if(sum_b>c3) sum_b=c3;//final cost of bus calculated
//cout<<"--"<<sum_b<<endl;
//cost for trolleys
int sum_t=0;
for(int i=0;i<m;++i) {
if(c1*troll[i]>c2) {
sum_t+=c2;
}
else sum_t+=(c1*troll[i]);

}
if(sum_t>c3) sum_t=c3;
int total=sum_b+sum_t;
if(total>c4) cout<<c4<<endl;
else cout<<total<<endl;


return 0;
}

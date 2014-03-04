#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;


int main() { 
long long int n,k;
cin>>n;
long long int candies[n];
cin>>k;
for(int i=0;i<n;++i) cin>>candies[i];
sort(candies,candies+n);
long long int min=9999999999;
 
/*for(int start=0;start<n;++start) { 

if((start+k)>(n-1)) break;*/
//for(int a=0;a<n;++a) cout<<candies[a]<<" ";
//cout<<endl;
//long long int sum=0;
int start=0;
int k1=k;
for(int start=0;start<n;++start) {
//cout<<"----------------------------"<<endl;
k1=k1+start;
if((start+k)>(n-1)) break;
long long int sum=0;
for(int i=start;i<=(start+k1);++i) { 

for(int j=i+1;j<(k1);++j) { 
if(j>(k1-1)) {  break;  }

sum+=abs(candies[i]-candies[j]);
//cout<<"I m here:"<<sum<<endl;
//cout<<candies[i]<<" "<<candies[j]<<endl;

}
	
}
if(sum==0) min=min;
else {  if(sum<=min) min=sum;  }
//cout<<"min:"<<min<<endl;
}

cout<<min<<endl;


return 0;
}

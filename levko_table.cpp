#include<iostream>
using namespace std;

int main() {
int n,k;
cin>>n>>k;
int temp=n;
for(int i=1;i<=n;++i) { 
for(int j=1;j<=n;++j) {
      if(temp==j) cout<<k<<" ";
      else cout<<"0"<<" ";


}
cout<<endl;
temp--;
}


return 0;
} 
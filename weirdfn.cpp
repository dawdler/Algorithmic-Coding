#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int mod = 1000000007;
int main()
{
int T,a,b,c,n;
ull sum=0;
cin >> T;
while(T--) {
  	cin >> a >> b >> c >> n;
sum = 1ULL;
      priority_queue<int,vector<int>,less<int> >below;//contains all the elements till the median(inclusive)
      priority_queue<int,vector<int>,greater<int> >above; //contains all the elements greater then median
      below.push(1);
	int ls=below.size();
	 int rs=above.size();
	  for(int i=2;i<=n;i++) {
	      
	      int median=below.top();
	      ull r=1ULL*a*median+1ULL*b*i+c;
		if(r>=mod)
		      r=r%mod;
		  sum+=r;
		  if(median>r) {
			  below.push(r);ls++; 
		  } else {
			  above.push(r);rs++; }
			  while(ls>rs+1) {//when size(below) greater than size(above) by  more then 1
				      above.push(below.top());
					ls--;rs++;below.pop();
			  }
			  while(rs>ls) {
				  below.push(above.top()); above.pop();
				    ls++;rs--;
			  }
	  }
	  cout<<sum<<endl;
}
return 0;
}

			  
				
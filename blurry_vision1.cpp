#include<iostream>
#include<string>
#include<map>

using namespace std;

map<string,int>m1;
string a[11];
int main() { 
int t,n,m,ans=0;
string s;
cin>>t;
	while(t--) { 
	ans=0;
	cin>>n>>m;
	for(int i=0;i<n;++i)
	cin>>a[i];
	for(int i=0;i<n;++i) { 
		for(int j=0;j<m;++j) { 
				for(int k=i;k<n;++k) { 
				for(int l=j;l<m;++l) {
					s=" ";
			for(int p=i;p<(k+1);++p) {
				for(int q=j;q<(l+1);++q) { 
				s.push_back(a[p][q]);

				}
				s.push_back('$');
				}
				if(m1.find(s)!=m1.end())
					ans=max(ans,m1[s]);
			else m1[s]=(k-i+1)*(l-j+1);
					}

						}
				}
	
			}

cout<<ans<<endl;
m1.clear();
	}
return 0;

}

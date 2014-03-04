#include<iostream>
using namespace std;
#define MAX 100010
int main()
{
int list[MAX],visited[MAX]={0};
int location[MAX];
int s,n,t;
int i;
int zero=0,min=-1;
int count=0;
cin>>n>>s>>t;
for(i=1;i<=n;++i) {
		cin>>list[i];
	}
if(s==t) { cout<<zero<<endl; return 0; }
i=s;
while(1) {
		if(!visited[i])  {
		++count;
	location[i]=list[i];
	visited[i]=1;
	if(location[i]==t) { //reached final 
			cout<<count<<endl;
			return 0;
		}
		}
		else {
			cout<<min<<endl;
			return 0;
                        }

	i=location[i];
		}
return 0;
}

           



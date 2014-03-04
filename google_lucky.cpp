#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 11
struct website {
		string name;
		int prefer;
}websites[MAX];
bool my_comp(const website &a,const website &b) {
	return a.prefer>b.prefer;
 }


int main()
{
int t;
cin>>t;
for(int j=0;j<t;++j) {
	for(int i=0;i<10;++i) {
			cin>>websites[i].name;
			cin>>websites[i].prefer;
		}
int n=10;
sort(websites,websites+n,my_comp);
printf("Case #%d:\n",j+1);
cout<<websites[0].name<<endl;

for(int i=1;i<10;++i){
	if(websites[i].prefer==websites[i-1].prefer) {
			cout<<websites[i].name<<endl;
			}
		else break;
		}
}
return 0;
}




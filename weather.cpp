#include<iostream>
using namespace std;
#define MAX 100005
int main()
{
int list[MAX],neg[MAX],pos[MAX];
int n;
cin>>n;

for(int i=0;i<n;++i) {
	cin>>list[i];
	}
int count=0;
//int neg[n],pos[n];
for(int i=0;i<n;++i) {
	if(list[i]>=0) {
		++count;
		}
	neg[i]=count;
	}
	count=0;
	for(int i=n-1;i>=0;--i) {
			if(list[i]<=0) {
				++count;
			}
			pos[i]=count;
		}
int a,min=99999999;
for(int i=0;i<n-1;++i) {
a=neg[i]+pos[i+1];
	if(a<min) min=a;
	}
cout<<min<<endl;
return 0;
}

			

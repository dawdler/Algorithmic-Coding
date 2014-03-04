#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 1010

struct dragon {
	int strength;
	int win;
	}dragons[MAX];

bool my_comp(const dragon &a,const dragon &b) {
		return a.strength<b.strength;
	}
int main()
{
int s,n;
int flag;
cin>>s>>n;
	for(int i=0;i<n;++i) {
		cin>>dragons[i].strength>>dragons[i].win;
		}
	sort(dragons,dragons+n,my_comp);
	for(int i=0;i<n;++i) {	
		if(s>dragons[i].strength) {
			s+=dragons[i].win;
			flag=0;
			}
			else  { flag=1; cout<<"NO\n"; return 0;
				}
		
	}
	if(flag==0) cout<<"YES\n";
return 0;
}



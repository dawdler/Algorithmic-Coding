#include<iostream>
#include<algorithm>
using namespace std;

struct node { 
	int color;
	int qnt;
	}node1[10];

bool my_comp(const node &a,const node &b) { 

	return a.qnt<b.qnt;
		}


int main() { 
int v;
int color[10]={0};
cin>>v;
for(int i=1;i<=9;++i) { 
	cin>>color[i];
	//cin>>node1[i].qnt;
	//node1[i].color=i+1;
		}
//sort the structure
				int n=10;
//	sort(node,node+n);
	//string ans;
	
//sort(node1,node1+n,my_comp);
int min=9999999;
int index;
for(int i=1;i<=9;++i) { 
	if(color[i]<min) { 
	min=color[i];
	index=i;
	}
	}
	
int ans=0;
	while(v>=0) { 
		v=v-min;
		if(v<0) break;	
		ans=ans*10+index;	

		}
	if(ans) cout<<ans<<endl;
	else cout<<"-1"<<endl; 
/*
int ans=0;
	while(v>=0) { 
		v=v-node1[0].qnt;
		if(v<0) break;
		ans=ans*10+node1[0].color;
	
		}
	if(ans)
	cout<<ans<<endl;
	else cout<<"-1"<<endl;
*/
return 0;

}

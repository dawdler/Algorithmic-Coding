#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#define MAX 10000
using namespace std;


vector<int>::iterator it;
int main() { 
int n;

//int list[MAX];
int temp1;

int count=0;
int result=0;
int *p;
	vector<int>list;
cin>>n;
		for(int i=0;i<n;++i) { cin>>temp1;
		list.push_back(temp1);
		 ++count;  }
for(int i=0;i<n;++i) cout<< list[i]<<" ";
	cout<<endl;
	//start the game
	bool flag=false;
	while(1) { 
	++result;//Alice starts the game
	flag=false;
	for(int i=0;i<count;++i) { 
	for(int j=0;j<count;++j) { 
		if(i==j) continue;
	
		int temp=abs(list[i]-list[j]);
	//cout<<"Temp: "<<temp<<endl;
	
	//	p=find(list,list+count,temp);
	it=find(list.begin(),list.end(),temp);
		if(*it!=temp) { //not present n add the element
		list.resize(count+1);
		list[++count]=temp;
		flag=true;
		break;	
		}
	
		}	
		if(flag) break;
	
		}
	if(flag==false) { //coudnt find such distinct number
	if((result)%2==0) cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
			
	break;	
	} 
	
	}	
	
}

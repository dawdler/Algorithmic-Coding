#include<iostream>
#include<algorithm>
#include<cmath>
#define MAX 10000
using namespace std;

int main() { 
int n;
long long list[MAX]={0};

int count=0;
int result=0;
long long *p;

cin>>n;
		for(int i=0;i<n;++i) { cin>>list[i]; ++count;  }

	//start the game
	bool flag=false;
	while(1) {
	 
	++result;//Alice starts the game
/*	if(result%2==0) cout<<"Bob"<<endl;	
else cout<<"Alice"<<endl;*/
	flag=false;
	for(int i=0;i<n;++i) { 
	for(int j=0;j<n;++j) { 
		if(i==j) continue;
	
		long long temp=abs(list[i]-list[j]);
	//cout<<"Temp: "<<temp<<endl;
	
		p=find(list,list+count,temp);
		if(*p!=temp) { //not present n add the element
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

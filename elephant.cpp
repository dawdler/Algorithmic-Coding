#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 110
#define MAX1 10001
int main()
{
int rooms[MAX][MAX];
int n,m;
int path[MAX1];
int t,temp;
cin>>t;
while(t--) {
	cin>>n>>m;
	for(int i=0;i<m;++i) cin>>path[i];
	for(int i=0;i<n;++i) {
	cin>>rooms[i][0];
	for(int j=1;j<=rooms[i][0];++j) {
		cin>>rooms[i][j];
	   
		}


	}
int index;
	int max=0,sum=0,go=0,size=0;
//transverse acc to path array
	for(int i=0;i<m;++i) {
		max=0;
		go=path[i];
		size=rooms[go][0];
		if(size==0) continue;
		for(int j=1;j<=size;++j) {
		if(rooms[go][j]>max) {
			max=rooms[go][j];
			index=j;
			}
		}
		//cout<<"max:"<<max<<endl;
		sum+=max;
		//rooms[go][0]--;
		rooms[go][index]=0;
	}		

cout<<sum<<endl;
}
//display the contents of the room
//for(int i=0;i<n;++i) {
return 0;
}	


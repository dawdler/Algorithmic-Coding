#include<iostream>
#include<cstring>
#define MAX 100005
#define MAX1 2
using namespace std;
int count[MAX]={0};
int index1[MAX][MAX1];


int main() { 
int n;
cin>>n;
int temp;
memset(index1,0,sizeof index1);
for(int i=0;i<n;++i) { 
cin>>temp;
count[temp]++;
if(index1[temp][0]==0) index1[temp][0]=i+1;
if(count[temp]==2) { index1[temp][0]=(i+1)-index1[temp][0]; index1[temp][1]=i+1; }
if(count[temp]>2) { 
	if(index1[temp][0]!=-1)
	if(index1[temp][0]==((i+1)-index1[temp][1]))  { index1[temp][1]=i+1; }

	else  index1[temp][0]=-1;


}
}

/*for(int i=0;i<MAX;++i) { 	
	if(index[temp]==0) continue;
	cout<<"i:"<<i<<" "<<index[i];

	}
*/
int result=0;
for(int i=0;i<MAX;++i) {
if(count[i]==1) { ++result; continue; }
if(count[i]>1) {
if(index1[i][0]!=-1) { 
		++result;

		} 
}
}
cout<<result<<endl;
//cout<<count[3]<<" "<<count[5]<<endl;
for(int i=0;i<MAX;++i) { 

if(count[i]==1) cout<<i<<" "<<"0"<<endl;
if(count[i]>1)  {

if(index1[i][0]!=-1) cout<<i<<" "<<index1[i][0]<<endl;
}
}
return 0;
}

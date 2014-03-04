#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

#define MAX 500000

int num[MAX]={0};
int main()
{
int list[101];
//int visited[MAX];
int t,n;
cin>>t;
while(t--) {
	memset(num,0,sizeof(num));
//memset(visited,0,sizeof(visited));
	cin>>n;
	for(int i=0;i<n;++i) {
		cin>>list[i];
			if(list[i]>500000) continue;
			num[list[i]]++;
		}
int count=0;	
sort(list,list+n);
for(int i=0;i<n;++i) {
	if(list[i]<=500000)
	if(num[list[i]] && num[list[i]*2])
 {  
			++count;
			num[list[i]]--;
			num[list[i]*2]--;
	}
}
cout<<count<<endl;
}
return 0;
}


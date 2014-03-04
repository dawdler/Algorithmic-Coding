#include<iostream>
using namespace std;
#define ASC 1
#define DSC 2
#define MAX 50
int main()
{
int t,n;
int order;
int list[MAX];
cin>>t;
for(int i=0;i<t;++i) {
		cin>>n;
		for(int j=0;j<n;++j) { 
					cin>>list[j];
				if(j==1) { 
			if(list[j]>list[j-1]) order=ASC;
			else order=DSC;
}
}
cout<<"Case "<<i+1<<": "<<list[n>>1]<<endl;
}
return 0;
}


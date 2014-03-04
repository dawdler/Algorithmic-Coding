#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int a[101];
int count=0;
int b[101];
	int temp=n*n;
int start=1;
cout<<start<<" ";
++count;
	//for(int i=1;i<=temp;++i) {
	while(1) {
		cout<<start+3<<" ";
		start=start+3;
		++count;
		if(count==n) break;
		cout<<start+1<<" ";
		start+=1;
		++count;
		if(count==n) break;
		 cout<<start+3<<" ";
                start+=3;
                ++count;
                if(count==n) break;
	}
count=0;
cout<<endl;
start=2;
cout<<start<<" ";
++count;
 while(1) {
                cout<<start+1<<" ";
                start=start+1;
                ++count;
                if(count==n) break;
                cout<<start+3<<" ";
                start+=3;
                ++count;
                if(count==n) break;
                 cout<<start+1<<" ";
                start+=1;
                ++count;
                if(count==n) break;  }
return 0;
}

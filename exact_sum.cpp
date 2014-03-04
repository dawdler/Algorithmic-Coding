#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

#define MAX 10001

int main()
{
int n,book1,book2;
int diff,ndiff=9999999;
int temp,money;
int list[MAX]={0},list1[MAX]={0};
while(cin>>n) {
for(int i=0;i<n;++i) { 
		book1=book2=diff=0;
		ndiff=9999999;
		cin>>temp;
		list[temp]=i;
		list1[i]=temp;
		}
	cin>>money;
	for(int i=0;i<n;++i) {

		if(list[money-list1[i]]) {
			diff=abs((money-list1[i])-list1[i]);
			//cout<<diff<<" ";
			if(diff<ndiff) {
				book1=money-list1[i];
				book2=list1[i];
				ndiff=diff;
				}
		}
}
if(book1>book2)
printf("Peter should buy books whose prices are %d and %d.",book2,book1);

else printf("Peter should buy books whose prices are %d and %d.",book1,book2);
cout<<"\n";
cout<<endl;
}

return 0;
}

				

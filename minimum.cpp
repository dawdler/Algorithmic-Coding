#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 101
int a[MAX],n;

/*int check() {
int temp=a[0];
		for(int j=1;j<n;++j) {
				if(temp!=a[j])	return 0;
}
return 1;
}
	*/	
int main()
{
int t;
cin>>t;
int count;
int flag;
int largest;
while(t--) {
	//flag=0,count=0;
int sum=0;
	scanf("%d",&n);
		for(int i=0;i<n;++i) scanf("%d",&a[i]);
		sort(a,a+n);
		largest=a[n-1];//choosing the largest element
		for(int i=0;i<n-1;++i) {
				sum+=largest-a[i];
}
printf("%d\n",sum);		
//check whether all elements are equal
	/*	while(flag!=1) {
	              flag=check();
if(flag==1) { cout<<count<<endl; break;  }
else {                  sort(a,a+n);
			for(int i=0;i<n-1;++i) {
						 ++a[i];
}
++count;

				}	
}*/
}

return 0;
}


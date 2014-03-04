#include<iostream>
using namespace std;
#define MAX 110
#define STOP -999999
int main() {

int list[MAX],temp;
int i=0;
while(true) {
	i=0;
	while(1) {
		
		cin>>temp;
		if(temp==STOP) break;
		list[i++]=temp;
		}
		int size=i;
		int max_so_far=list[0];
		int max_ending=list[0];
for(int i=1;i<size;++i) {
	/*if(max_ending<0) {
		max_ending=list[i];
		}
	else  {*/
		max_ending*=list[i];
	//	}
	if(max_ending>max_so_far) {
		max_so_far=max_ending;
		}
}
	cout<<max_so_far;
}
return 0;
}


		


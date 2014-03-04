#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
int b,g;
scanf("%d%d",&b,&g);
if(b>=g) {
	for(int i=1;i<=(b-g);++i) {
			printf("B");
		}
	for(int i=1;i<=g;++i) {
			printf("GB");
		}
	printf("\n");	
}

else {
		for(int i=1;i<=(g-b);++i) {
				printf("G");
			}
		for(int i=1;i<=b;++i) {
			printf("BG");
		}
	printf("\n");	
}
return 0;
}


#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
int test,i,med;
int street[50001],avenue[50001];
scanf("%d",&test);
while(test--) {
		int s,a,f;
		scanf("%d %d %d",&s,&a,&f);
	for(i=0;i<f;++i) {
			scanf("%d %d",&street[i],&avenue[i]);
}
std::sort(street,street+f);
std::sort(avenue,avenue+f);
if((f%2)==1)  med=f/2;
else {
	med=(f-1)/2;  }

printf("(Street: %d, Avenue: %d)\n",street[med],avenue[med]);
}

		return 0;
}
//end of source code

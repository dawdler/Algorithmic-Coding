#include<cstdio>
//#include<cstring>
#include<algorithm>

#define MAX 1000000
using namespace std;
int main()
{
int i;
long n,k;
long list[MAX];
scanf("%ld",&n);
scanf("%ld",&k);
for(i=0;i<n;++i) {
	scanf("%ld",&list[i]);
}

//sort the array
std::sort(list,list+n);
printf("%ld\n",list[k-1]);
return 0;
}



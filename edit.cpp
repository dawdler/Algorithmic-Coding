#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
//cout<<(int)'z';
char s1[1001];
int arr[1001];
int count;
while(scanf("%s\n",s1)!=EOF) {
	count=0;
	memset(arr,-1,1001);
	for(int i=0;i<strlen(s1);++i) {
		if(s1[i]>=65 && s1[i]<=90) arr[i]=0;
		else arr[i]=1;
	}
	for(int i=0;i<strlen(s1);++i) {
		if(arr[i]==arr[i+1]) ++count;
		}
	printf("%d\n",count);
	}



return 0;
}

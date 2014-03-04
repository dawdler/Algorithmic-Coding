#include<iostream>
#include<cstring>
#include<cstdio>
#include<stack>
#include<algorithm>
using namespace std;
#define MAX 2010
int main()
{
int count=1,ans=0;
char temp[MAX];
while(1) {
	scanf("%s",temp);
	if(temp[0]=='-') break;
	ans=0;
	stack<char>S;
	for(int i=0;i<strlen(temp);++i) {
	if(temp[i]=='{') S.push(temp[i]);
	else {
		if(!S.empty()) S.pop();
		else {
			ans+=1;
			S.push('{');
			}
		}
		}
	
if(!S.empty()) {
		ans+=S.size()/2;
	}
	printf("%d. %d\n",count++,ans);
	
}	
}




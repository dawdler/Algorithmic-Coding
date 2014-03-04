#include<stdio.h>
#include<list>
#include<string.h>
using namespace std;

int main()  {
char x[100*1000+1];
int i;
list<char>carlist;
while(scanf("%s",x)!=EOF) {
list<char>carlist;		
list<char>::iterator it=carlist.begin();
int n=strlen(x);
	for(i=0;i<n;++i) {
			if(x[i]=='[') 
				it=carlist.begin(); 
			else if(x[i]==']') 
				it=carlist.end();
			
	else  carlist.insert(it,x[i]); 
}
	//for(i=0;i<n;++i) printf("%c",carlist[i]);
for(it=carlist.begin();it!=carlist.end();it++) 
		printf("%c",*it);
		
printf("\n");
}
return 0;
}


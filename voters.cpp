#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string.h>
#include <math.h>
#include<stdio.h>

inline int fastinput()
    {
    int input=0;
    char c=0;
    while(c<33) { c=getchar_unlocked(); }
    while(c>33)
    {
    input=input*10+c-'0';
	    c=getchar_unlocked();
    }
    return input;
    }
using namespace std;
map<int,int>m;
int main()
{

int a,b,c,i,count=0;
int j=0;
int flag=0,k=0;
//scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
a=fastinput();b=fastinput();c=fastinput();
int list[a+b+c],res[a+b+c];
//for(i=0;i<(a+b+c);++i) m[i]=0;
for(i=0;i<(a+b+c);++i) {
		list[i]=fastinput();
		//scanf("%d",&list[i]);
	/*	m[list[i]]++;
		if(m[list[i]]>=2) {
			m[list[i]]=0;
			count++;
			res[j++]=list[i];
}*/

		if(m[list[i]]==1) {
				for(k=0;k<count;++k) {  
							if (list[i]==res[k]) {   flag=1; } 
				
						}
				if (flag!=1) {	
				res[j++]=list[i];
				++count;    }
				}
		else { m[list[i]]=1; continue; }

}
count=count-1;
sort(res,res+count);
//printf("output:\n");
printf("%d\n",count);
for(i=0;i<count;++i) {
		printf("%d\n",res[i]);
}
return 0;
}


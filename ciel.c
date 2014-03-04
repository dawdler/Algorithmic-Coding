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
int main() {
int t1[12];
int i;
int t,p;
	int res;
for(i=0;i<12;i++)  t1[i]=(1<<i);
	;
//scanf("%d",&t);
t=fastinput();
	while(t--) {
		//scanf("%d",&p);
		p=fastinput(); 
			res=0;
	for(i=11;i>=0;i--)
		{
			res +=p/t1[i];
			p %=t1[i];
		}
printf("%d\n",res);
}
return 0;
}

	


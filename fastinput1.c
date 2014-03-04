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
int a,b;
a=fastinput();printf("a:%d\n",a);
//b=fastinput();printf("b:%d\n",b);
return 0;
}


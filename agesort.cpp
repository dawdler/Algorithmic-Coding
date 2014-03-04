#include<algorithm>
#include<stdio.h>
using namespace std;
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
long int a[2000005],i,n;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if (n==0)
        {
            break;
        }
        for (i=0;i<n;i++)
        {
            //scanf("%ld",&a[i]);
		a[i]=fastinput();
        }
        sort(a,a+n);
        for (i=0;i<n;i++)
        {
            printf("%ld",a[i]);
            if (i<(n-1))
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}


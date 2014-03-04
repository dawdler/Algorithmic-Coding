#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    long int book, price[100000],balance,min, max,temp,diff,i,j,k=0;
    while(scanf("%ld",&book)==1)
    {
        k+=1;
        for(i=1;i<=book;i++)
            scanf("%ld",&price[i]);
        scanf("%ld",&balance);
        diff=99999999;
        for(i=1;i<book;i++)
        {
            if(price[i]>=balance)
                continue;
            for(j=i+1;j<=book;j++)
            {
                if(price[i]+price[j]==balance && diff>abs(price[i]-price[j]))
                {
                    diff=abs(price[i]-price[j]);
                    if(price[i]<price[j])
                    {
                        min=price[i];
                        max=price[j];
                    }
                    else
                    {
                        max=price[i];
                        min=price[j];
                    }

                }

            }
        }

        printf("Peter should buy books whose prices are %ld and %ld.\n\n",min,max);
    }
    return 0;
}


#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <utility>
#include <set>
#include <math.h>
using namespace std;

int main()
{
    char sor[1000];   
    int i, c;
    while(gets(sor))    
    {
        c = 0;
        for(i = 0; sor[i] != '\0'; i++)    
        {
               if(((sor[i] >= 'a' && sor[i] <= 'z') || (sor[i] >= 'A' && sor[i] <= 'Z')) && (sor[i+1] < 'a' || sor[i+1] > 'z')
                                                                                                                                       && (sor[i+1] < 'A' || sor  [i+1] > 'Z'))
             {
                   c++;
             }
        }       
         printf("%d\n",c);   
     }
    return 0;
}    

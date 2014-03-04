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
#include <bitset>
#include <utility>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1000000
using namespace std;
 
int lowLimit;
int highLimit;
int dp [100] [100];
int n, t, p;
 
int bktk (int sum, int index)
{
    if ( sum > t ) return 0;
 
    if ( index == n ) {
        if ( sum == t ) return 1;
        return 0;
    }
 
    if ( dp [sum] [index] != -1 )
        return dp [sum] [index];
 
    dp [sum] [index] = 0;
    int ret = 0;
 
 
    for ( int i = lowLimit; i <= highLimit; i++ ) {
        sum += i;
        ret += bktk (sum, index + 1);
        sum -= i;
    }
 
    return dp [sum] [index] = ret;
 
}
 
void reset ()
{
    for ( int i = 0; i < 100; i++ ) {
        for ( int j = 0; j < 100; j++ )
            dp [i] [j] = -1;
    }
}
 
int main ()
{
    int testCase;
    scanf ("%d", &testCase);
 
    while ( testCase-- ) {
        scanf ("%d %d %d", &n, &t, &p);
 
        lowLimit = p;
        highLimit = t - p * (n - 1);
 
        reset ();
 
        //bktk (0, 0);
 
        printf ("%d\n", bktk (0, 0));
 
    }
 
    return 0;
}

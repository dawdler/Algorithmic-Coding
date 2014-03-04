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
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>
 
#define Inf 2147483647
#define Pi acos(-1.0)
#define N 1000000
#define LL long long
 
inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int dr [] = {-1, -1, 0, 1, 1, 1, 0, -1};
const int dc [] = {0, 1, 1, 1, 0, -1, -1, -1};
 
#define F(i, a, b) for( int i = (a); i < (b); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fe(i, x) for(typeof (x.begin()) i = x.begin(); i != x.end (); i++)
#define Set(a, s) memset(a, s, sizeof (a))
#define max(a, b)  (a < b ? b : a)
#define min(a, b)  (a > b ? b : a)
 
using namespace std;
 
int parentCity [26 + 5];
bool matrix [26 + 5] [26 + 5];
 
int main ()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int testCases; scanf ("%d", &testCases);
    bool blank = false;
 
    while ( testCases-- ) {
        int city;
        int query;
        scanf ("%d %d", &city, &query);
 
        // clean up
        Set(matrix, false);
 
        char city1 [100];
        char city2 [100];
        for ( int i = 0; i < city; i++ ) {
            scanf ("%s %s", city1, city2);
            // roads are bi-directional
            matrix [city1 [0] - 'A'] [city2 [0] - 'A'] = matrix [city2 [0] - 'A'] [city1 [0] - 'A'] = true;
        }
 
        if ( blank ) printf ("\n");
        blank = true;
 
        for ( int i = 0; i < query; i++ ) {
            scanf ("%s %s", city1, city2);
            queue <int> q;
            q.push(city1 [0] - 'A');
            Set(parentCity, -1);
            // source is a parent of itself
            parentCity [city1 [0] - 'A'] = city1 [0] - 'A';
 
            while ( !q.empty() ) {
                int popCity = q.front();
                q.pop();
 
                // we found the destination city
                if (popCity == city2 [0] - 'A') break;
 
                for ( int j = 0; j < 26; j++ ) {
                    if ( matrix [popCity] [j] && parentCity [j] == -1 ) {
                        parentCity [j] = popCity;
                        q.push(j);
                    }
                }
            }
 
            // format the output
            stack <char> output;
            int cityIterator = city2 [0] - 'A';
            output.push(city2 [0]);
 
            // traverse back to build the path
            while ( parentCity [cityIterator] != cityIterator ) {
                output.push(parentCity [cityIterator] + 'A');
                cityIterator = parentCity [cityIterator];
            }
 
            // print output
            while ( !output.empty() ) { printf ("%c", output.top()); output.pop(); }
            printf ("\n");
        }
    }
 
    return 0;
}
 


// link: http://uva.onlinejudge.org/external/7/793.html
// Runtime: 0.260s
// Tag: Union find 


#include <cstdio>
#include <cstring>
#include <cctype>

#define N 1000000

using namespace std;

int parent [N];

int findParent (int p)
{
    if ( parent [p] == p ) return p;
    return parent [p] = findParent(parent [p]);
}

int main ()
{
    int testCases; scanf ("%d", &testCases);
    bool blank = false;

    while ( testCases-- ) {

        for ( int i = 0; i < N; i++ ) parent [i] = i;

        int numberOfComputers;
        scanf ("%d", &numberOfComputers);
        getchar ();

        char command;
        int computeri, computerj;
        int successfulCnt = 0, unsuccessfulCnt = 0;

        while ( (command = getchar ()) && isalpha (command) ) {

            scanf ("%d %d", &computeri, &computerj); getchar ();

            int p = findParent(computeri);
            int q = findParent(computerj);

            if ( command == 'c' ) {
                parent [p] = q;

            } else {// for 'q'
                if ( p == q ) successfulCnt++;//if both the input values got same parents then they r connected else they r not.
                else unsuccessfulCnt++;
            }
        }

        if ( blank ) printf ("\n"); blank = true;
        printf ("%d,%d\n", successfulCnt, unsuccessfulCnt);

    }

    return 0;

}


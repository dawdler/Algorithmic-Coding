#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <algorithm>
using namespace std;

char a [1005] [25];

bool anagram (int x, int y)
{
    int len_x = strlen (a [x]);
    int len_y = strlen (a [y]);

    if ( len_x == 0 || len_y == 0 )
        return false;

    if ( len_x != len_y )
        return false;

    int frq [26];
    for ( int i = 0; i < 26; i++ )
        frq [i] = 0;

    for ( int i = 0; i < len_x; i++ )
        frq [tolower (a [x] [i]) - 'a']++;

    for ( int i = 0; i < len_y; i++ )
        frq [tolower (a [y] [i]) - 'a']--;

    for ( int i = 0; i < 26; i++ ) {
        if ( frq [i] )
            return false;
    }

    return true;
}

int main ()
{
    int index = 0;

    while (scanf ("%s", a [index])) {
        if ( strcmp (a [index], "#") == 0 )
            break;
        index++;
    }

    bool flag;

    for ( int i = 0; i < index; i++ ) {
        flag = false;
        for ( int j = i + 1; j < index; j++ ) {
            if ( anagram (i, j) ) {
                a [j] [0] = 0;
                flag = true;
            }
        }

        if ( flag )
            a [i] [0] = 0;
    }

    // sort
  /*  for ( int i = 0; i < index; i++ ) {
        for ( int j = i + 1; j < index; j++ ) {
            if ( strcmp (a [i], a [j]) > 0 ) {
                char temp [25];
                strcpy (temp, a [i]);
                strcpy (a [i], a [j]);
                strcpy (a [j], temp);
            }
        }
    }*/
std::sort(a,a+index);

    for ( int i = 0; i < index; i++ ) {
        if ( a [i] [0] != 0 )
            printf ("%s\n", a [i]);
    }

    return 0;
}


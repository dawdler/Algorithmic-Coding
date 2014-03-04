#include<stdio.h>

#define min( a, b ) ( (a < b)? a : b )

 

int main()

{

int uglynumbers[1505] = {1};

int m2 = 0, m3 = 0, m5 = 0;

int i = 1;

int pre_n = 1;

for( i = 1 ; i < 1500 ; i++ )

{

for( ; m2 < i ; m2++ )

if( uglynumbers[m2]*2 > pre_n )

break;

for( ; m3 < i ; m3++ )

if( uglynumbers[m3]*3 > pre_n )

break;

for( ; m5 < i ; m5++ )

if( uglynumbers[m5]*5 > pre_n )

break;

pre_n = min( uglynumbers[m5]*5, min( uglynumbers[m2]*2 , uglynumbers[m3]*3 ) );

uglynumbers[i] = pre_n;

}

printf( "The 1500'th ugly number is %d.\n", uglynumbers[1499] );

system( "pause" );

return 0;

}

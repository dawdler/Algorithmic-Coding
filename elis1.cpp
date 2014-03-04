#include <climits>
#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int lis( int* a, int N ) {
   int *best, i, j, max = INT_MIN;
   best = (int*) malloc ( sizeof( int ) * N );
 
   for ( i = 0; i < N; i++ ) best[i] = 1;
 
   for ( i = 1; i < N; i++ )
      for ( j = 0; j < i; j++ )
         if ( a[i] > a[j] && best[i] < best[j] + 1 ){
		    best[i] = best[j] + 1;
			if(max < best[i])
				max = best[i];
		 }         
 
   free( best );
   return max;
}
// Sample usage.
int main(){
	int n;
	int list[25];
	
	cin>>n;
  for(int i=0;i<n;++i) cin>>list[i];
  // the longest increasing subsequence = 13456?
  // the length would be 5, as well lcs(b,8) will return.
  printf("%d\n", lis( list, n ) );
}

#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
 
int dp[1500][150] = {0};
 
int main(){
  dp[0][0] = 1;
  int row = 1, digit;
  bool exit = 0;
	printf("%d",row-2);
  do{
    for(int i = row-2 ; i > 0 ; i-- ){
      for( int j = 0 ; j < 150 ; j++ ){
	//printf("%d\n",i);
        dp[i][j] += dp[i-1][j];
        dp[i][j+1] += dp[i][j]/10;
        dp[i][j] %= 10;
      }
    }
    for( int i = 0 ; i < row ; i++ ){
      for( digit = 149 ; digit >= 0 ; digit-- )
        if( dp[i][digit] ) break;
      if( digit >= 60 ) exit = 1;
       
      for( ; digit >= 0 ; digit-- )
   //     printf( "%d", dp[i][digit] );
       
      if( i != row-1 ) printf( " " );
 //     else printf( "\n" );
    }
    dp[row++][0] = 1;
  }while( !exit );
  return 0;
}

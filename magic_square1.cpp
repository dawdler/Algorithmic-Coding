#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
 int a[5][5];
 int s = 0;
 
 for ( int i=1; i<=3; i++)
 { for ( int j=1; j<=3; j++)
   { cin>>a[i][j];
   }
 }
 for ( int k=1; k<=100000; k++)
 { s= a[2][1] + a[3][1] + k;
   a[2][2] = s-a[1][2]-a[3][2];
   a[3][3] = s-a[1][3]-a[2][3];
   if (k+a[2][2]+a[3][3] == s)
   { a[1][1] = k;
     for (int i=1; i<4; i++)
     { for (int j=1; j<4; j++)
       { cout<<a[i][j]<<" ";
       }   
      cout<<endl; 
     }
     break;
   }
 }
 return 0; }

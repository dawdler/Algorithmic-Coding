#include <iostream>
//#include<conioh>
#include<cstring>
#include<cmath>
#include<cstdio>

void main()
{
    clrscr();
    int user_no = 1;
    int sa[100][100];

    cout<< "\nEnter a no.";
    cin>> user_no;

    int sqr = user_no*user_no;

    int r = 1,c = user_no;

    int n = 1;
    do{
    for(int b=r; b<=c; b++)
    {sa[r][b]=n;
    n++;
    }

    for(b=r+1; b<=c; b++)
    {
    sa[b][c] = n;
    n++;
    }
   
    n--;

    for(b=c; b>=r;b--)
    {sa[c][b]=n;
    n++;
    }

    for(b=c-1; b>=r+1;b--)
    {sa[b][r] = n;
    n++;
    }
    r++;
    c--;
    }while(n<=sqr);

    if(user_no%2 != 0)
    {
    int mid = ((user_no/2) + 1);
    sa[mid][mid] = sqr;
    }

    //display
    for(int a = 1; a<=user_no; a++)
    {
    for(int b = 1; b<=user_no; b++)
    {
    cout<< sa[a][b]<<"\t";
    }
        cout<< endl << endl;

    }
  getch();
}

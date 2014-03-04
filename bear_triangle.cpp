#include<iostream>
using namespace std;

int main()
{
int zero=0;
int r_x,r_y;
cin>>r_x>>r_y;
//find the cordinates of triangle now
int tempx,tempy;
if(r_x<0) {
	tempx=-r_x;
	}
else tempx=r_x;

if(r_y<0) tempy=-r_y;
	else tempy=r_y;
	
int finalx=tempx+tempy;
int finaly=tempx+tempy;

if(r_x<0) finalx=-finalx;

if(r_y<0) finaly=-finaly;
//display format
if(finalx<0)
cout<<finalx<<" "<<zero<<" "<<zero<<" "<<finaly<<endl;
	else 
		cout<<zero<<" "<<finaly<<" "<<finalx<<" "<<zero<<endl;
return 0;



}


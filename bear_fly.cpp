#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define MAX 100010

int main()
{
int m,r,v,u;
int x1,y,final;

int x;
float sum=0.0;
cin>>m>>r;
int finalx,finaly,temp;
for(int i=0;i<m;++i) {
v=i/m+1;
u=m+1+i%m;

if(v<=m && u<=m) {
 	 x=2*r*v;
	x1=2*r*u;
	y=2*r;
	sum+=sqrt((x1-x)*(x1-x)+y*y);
	}
else if(v>m && u>m) { 
 x=2*r*v;
        x1=2*r*u;
        y=2*r;
        sum+=sqrt((x1-x)*(x1-x)+y*y);
        }
		
else {
		float hypo=sqrt(r*r+r*r);
		sum+=hypo;
		if(v>m&& v>u) {
			temp=u;
			u=v;
			v=u;
			}
		finalx=2*r*u;
		finaly=2*r;
		finalx=-r;
		sum+=sqrt((finalx-x)*(final-x));

	}
}


printf("%.10f\n",sum);
return 0;

}


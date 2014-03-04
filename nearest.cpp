#include<iostream>
#include<cmath>
#include<cstdio>
#define MAX 100010

using namespace std;


int main() {
int x,y,n;
float min=999999999.9;
int min_n=9999999,min_d=9999999;
scanf("%d %d %d",&x,&y,&n);
	float res=(float)x/y;
        float diff;
	for(int i=x;i>=0;--i) {
		for(int j=n;j>0;--j) {	
				//cout<<i<<"/"<<j<<endl;	
				diff=abs(res-(float)i/j);	
				//cout<<diff<<endl;
				if(diff<min) {
					min=diff;
					min_n=i;
					min_d=j;
					}
				if(diff==min)  {//checking minimal condition for denominator
						if(min_d>j) {
							min=diff;
							min_n=i;
							min_d=j;
    							}
							if(min_d==j) {
								if(min_n>i) {//checking minimal condition for numerator
									min=diff;
									min_n=i;
									min_d=j;
      																								}
												
									}
						}
			//	else break;
   }
}
cout<<min_n<<"/"<<min_d;
return 0;
}


					

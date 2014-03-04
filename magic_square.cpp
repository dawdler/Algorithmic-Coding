#include<iostream>
using namespace std;
#define MAX 100001
int main()
{
int mat[3][3];
int a;
int sum,temp1,temp;
int x1,x2,x3;
for(int i=0;i<3;++i) 
for(int j=0;j<3;++j) cin>>mat[i][j];

//finding x1

for(int i=0;i<MAX;++i) {
	a=i;
	temp=a*a+mat[0][1]*mat[0][1]+mat[0][2]*mat[0][2];
	temp1=a*a+mat[1][0]*mat[1][0]+mat[2][0]*mat[2][0];
	

	if(temp1==temp) {
		x1=a;
		sum=x1*x1+mat[0][1]*mat[0][1]+mat[0][2]*mat[0][2];
	x2=sum-mat[1][0]*mat[1][0]+mat[1][2]*mat[1][2];
	x3=sum-x1*x1+x2*x2;
		if(x1*x1+x2*x2+x3*x3==sum) {
			cout<<x1<<" "<<x2<<" "<<x3<<endl;
		break;
		}

	}
	}
//find the sum of a row
/*sum=x1*x1+mat[0][1]*mat[0][1]+mat[0][2]*mat[0][2];
x2=sum-mat[1][0]*mat[1][0]+mat[1][2]*mat[1][2];
x3=sum-x1*x1+x2*x2;
cout<<x1<<" "<<x2<<" "<<x3<<" "<<endl;*/
return 0;
}


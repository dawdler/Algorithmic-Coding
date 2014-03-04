#include<iostream>
using namespace std;
#define  MIN -1000000
int mat[4001]={0};

int f(int n,int a,int b,int c) {
	if(n<0)
 	return MIN;
	else if(n==0)
	return 0;
	else if(mat[n]!=0)
 	return mat[n];
	else
  	mat[n]=1+max(f(n-a,a,b,c),f(n-b,a,b,c),f(n-c,a,b,c));
	return mat[n];
	}
	
int main() {
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<f(n,a,b,c)<<endl;
	return 0;
	}


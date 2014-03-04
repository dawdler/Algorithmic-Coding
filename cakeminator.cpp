#include<iostream>
#define MAX 10
using namespace std;

int main()
{

int r,c;
cin>>r>>c;
char matrix[r][c];
for(int i=0;i<r;++i) {
	for(int j=0;j<c;++j) {
		cin>>matrix[i][j];
	}
	}
//checking for rows
int total=0,sum=0;
for(int i=0;i<r;++i) {
		sum=0;
	for(int j=0;j<c;++j) {
		if(matrix[i][j]=='S') {
			for(int a=0;a<j;++a)  matrix[i][a]='.';
			sum=0;
			break;
		}
		else {
			if(matrix[i][j]!='1') {
                     //     cout<<i<<" "<<j<<endl;    
			sum+=1;
				matrix[i][j]='1';
 }
			}
		}
	total+=sum;
	}

	//checking for columns
for(int j=0;j<c;++j) {
		sum=0;
	for(int i=0;i<r;++i) {
		if(matrix[i][j]=='S') {
			for(int a=0;a<i;++a) matrix[a][j]='.';
			sum=0;
			break;
			}
		else  {
			if(matrix[i][j]!='1') {
			matrix[i][j]='1';
		//cout<<i<<" "<<j<<endl;
				
			sum+=1;
			}
			}
		}
	total+=sum;
		}

cout<<total<<endl;
return 0;
}


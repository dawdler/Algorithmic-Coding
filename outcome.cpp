#include<iostream>
using namespace std;
int main()
{
int n;
int num;
int sum_row=0,sum_col=0,count=0;
cin>>n;
int game[n][n];
for(int i=0;i<n;++i) {
	for(int j=0;j<n;++j) {
		cin>>game[i][j];
	}
}
for(int i=0;i<n;++i) {
	for(int j=0;j<n;++j) {
		num=game[i][j];
	sum_row=0;sum_col=0;
	//calculate the row sum
	for(int k=0;k<n;++k) { sum_row+=game[i][k]; }
	//cout<<sum_row<<" ";	
for(int k=0;k<n;++k) sum_col+=game[k][j];
	if(sum_row<sum_col) ++count;
}
//cout<<endl;
}
cout<<count<<endl;
return 0;
}


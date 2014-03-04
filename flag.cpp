#include<iostream>
#define MAX 105
using namespace std;
int main()
{int sq[MAX][MAX];
int n,m,i,j;
int flag=1;
char letter;
int temp,temp1;
cin>>n>>m;
for(i=0;i<n;++i) {
		for(j=0;j<m;++j) {
				cin>>letter;
				sq[i][j]=letter-'0'; 
							}
		}


temp=sq[0][0];
for(i=0;i<n;++i) {
		if(flag==0) break;
		for(j=0;j<m;++j)  {// finding whether same values exist in the row
				temp1=sq[i][0];
				if(sq[i][0]==sq[i][j]) flag=1;
				else { flag=0; break; }
			}
if(i!=0 && flag==1) {
		if(temp==temp1) { flag=0; break;}
		else temp=temp1;
}
}


if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}


      

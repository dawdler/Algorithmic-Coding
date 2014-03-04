#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
#define MAX 251



int main() {
	char key[9];
		char txt[251];
	/*for(int i=0;i<10;++i) {
			for(int j=0;j<10;++j)	
mat[i][j]="raunak";	}
for(int i=0;i<10;++i) {
                        for(int j=0;j<10;++j)  cout<<mat[i][j]<<" ";
		cout<<endl;
	}*/
while(scanf("%s",key)>0) {
string mat[MAX][9];
scanf("%s",txt);
int len=strlen(txt);
int k=0;
int j=0;
int flag=0;
for(int i=0;i<MAX &&(k<len);++i) {
		++flag;
		for(int j=0;j<strlen(key);++j) {
				if((i+j)%2==0) {
			if(k<len) 
				mat[i][j]=txt[k++];
			if(k<len)
				mat[i][j]+=txt[k++];
  				}
		else if(k<len) mat[i][j]=txt[k++];
	}
	}
for(int i=1;i<=strlen(key);++i) {
	for(j=0;(key[j]-'0'!=i)&&(j<strlen(key));++j) ;
				
	
	for(int k=0;k<=flag;k++)  {
		cout<<mat[k][j];
}

}
printf("\n");
}
	/*	
for(int i=0;i<10;++i) {
	for(int j=0;j<strlen(key);++j) {
		cout<<mat[i][j]<<" ";	
		}
	cout<<endl;
	}
	*/					
return 0;
}


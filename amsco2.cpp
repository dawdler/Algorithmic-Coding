#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;

int main() {
char key[9],text[251];
while(scanf("%s",key)>0) {
		scanf("%s",text);
		int len=strlen(text);
int keylen=strlen(key);
int grp,k;
int flag[9]={0};
int flag1=0,flag2=0,rem=0;
string mat[251][9];
if(keylen%2!=0) {  k=(keylen-1)/2;
			grp=6*k+3;
	}
int n=strlen(text)/grp;
if(n*grp==len) flag1=1;
else {
		rem=len-grp*n; }

		if(rem>(3*k+2)) { rem-=3*k+2;
		flag2=1; }
		if(flag2==1) {
		for(int i=0;i<keylen;++i) {
				if(i%2==0 && (rem-1>=0)) {
					rem-=1; flag[i]=1;
				}
			else if(rem-2>=0) {
					rem-=2;flag[i]=2;
				}
			else if(rem-1>=0)  {rem-=1; flag[i]=1; }
		}
		}
	else {
			cout<<rem<<endl;
		for(int j=0;j<keylen;++j) {
				if(j%2==0 &&((rem-2)>=0) ) {
					rem-=2;
				flag[j]=2;
				}
			else if(rem-1>=0) {
				rem-=1;
				flag[j]=1;
				}
		}
	}
for(int i=0;i<9;++i) cout<<flag[i]<<" ";
}
return 0;
}

							

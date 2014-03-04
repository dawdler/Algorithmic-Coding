#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
int n;
int pos=0;
int flag=0;
int count[4]={0};
char list[4]={'A','B','C','D'};
scanf("%d",&n);
char input[2*n];
char output[2*n];
int temp=2*n;
memset(output,0,temp);
cin>>input;
for(int i=0;i<strlen(input);++i) {
	count[input[i]-'A']++;
	}
/*cout<<"Printing count array\n"<<endl;
	for(int i=0;i<4;++i) cout<<count[i]<<" ";*/
while(pos!=(2*n)) {
	for(int j=0;j<4;++j) {
if(count[j]<n) {
	//check the adjacent elements
if(input[pos] != list[j]	&& output[pos+1]!=list[j] && output[pos-1]!=list[j]) {
		output[pos]=list[j];
		count[list[j]-'A']++;
		flag=1;
		}
 		}
	if(flag==1) break;
		}
		//cout<<"pos:"<<pos<<endl;
	++pos;
	flag=0;
	}
if(strlen(output)!=2*n) {
	char temp1;
	temp1=output[0];
	output[0]=input[2*n-1];
	output[2*n-1]=temp1;
}
for(int i=0;i<2*n;++i) {
	cout<<output[i];
	}
cout<<endl;
/*cout<<"Printing count array\n"<<endl;
        for(int i=0;i<4;++i) cout<<count[i]<<" ";*/

return 0;
}




#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
#define MAX 260
int mark1[5000]={0};
void sieve() {
		mark1[0]=mark1[1]=1;
		int i,j;
	for(i=2;i<sqrt(2100);++i) {	
		//if(!mark1[i]) {
			for(j=i+i;j<2100;j+=i) {
					mark1[j]=1;
				}
		//}
	}
	}

int main()
{
int t;
sieve();
int flag=0;
/*for(int i=2;i<220;++i) { //cout<<"I m here"<<endl;
				if(!mark1[i]) cout<<i<<" ";
			}*/

char word[2005];
int table[MAX]={0};
cin>>t;
for(int j=0;j<t;++j) {
	//table[MAX]={0};
	flag=0;
	cin>>word;
	for(int i=0;i<strlen(word);++i) {		

		table[word[i]]++;
		}
cout<<"Case "<<j+1<<": ";
for(int i=0;i<255;++i) {
		if(!mark1[table[i]]) {
		flag=1;
				cout<<(char)i;
		}
	}
if(!flag) cout<<"empty";
cout<<endl;
memset(table,0,sizeof table);
}
return 0;

}

			



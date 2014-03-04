#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 100
#define N 26
struct crp {
		int freq;
		char let; 
};
bool compare(crp c1,crp c2);
int main()
{
struct crp count[MAX];
long n;
long p;
char ch;
char letter[10000];
for(int i=0;i<MAX;++i) { 	count[i].freq=0,count[i].let=i+65;
}
scanf("%ld",&n);
for(int j=0;j<n+1;++j) {
		gets(letter);
		for(int i=0;letter[i];i++) {
			ch=letter[i]&223;
				p=(ch^64)-1;
			//	ch=letter[i]+65;
			//	p=ch-65;
				count[p].freq++;
			}
		}
sort(count,count+N,compare);
for(int i=0;count[i].freq;i++) {
			cout<<count[i].let<<" "<<count[i].freq<<endl;
		}
return 0;
}

bool compare(crp c1, crp c2) {
		if(c1.freq>c2.freq) {
			return true;}
		else if((c1.freq==c2.freq)&&c1.let<c2.let)
			return true;
	return false;
}

			


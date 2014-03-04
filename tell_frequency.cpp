#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX 200
struct crp {
		int freq;
		char let;
};
bool compare(crp c1,crp c2);
int main()
{
struct crp letter[MAX];
char c;
long p;
for(int i=0;i<MAX;++i) {
		letter[i].freq=0;letter[i].let=i+32; }
//int frq[MAX]={0};
while((c=getchar()!='0')) {
			if(c=='\n' || c=='\r') continue;
			p=(c^31)-1;
			letter[p].freq++;

		}
sort(letter,letter+MAX,compare);
for(int i=0;letter[i].freq;i++){
			cout<<letter[i].let<<" "<<letter[i].freq<<endl;
}

return 0;

}

bool compare(crp c1,crp c2) {	
		if(c1.freq>c2.freq) 
			return false;
		else return true;
}

			

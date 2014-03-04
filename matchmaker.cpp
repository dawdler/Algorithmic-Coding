#include<iostream>
using namespace std;
#define MAX 100010
int main() {
int m,c;
int closed=0,beauty=0;
int color[MAX],dia[MAX];
int hash[MAX]={0};
int hash1[MAX]={0};
cin>>m>>c;
for(int i=0;i<m;++i) {//receive marker color and diameter
		 cin>>color[i]>>dia[i]; 
			hash[dia[i]]++;
			hash1[1000*color[i]+dia[i]]++;
}
//receive cap's color and diameter

for(int i=0;i<c;++i) {
			cin>>color[i]>>dia[i];
			if(hash[dia[i]]) {
					if(hash1[1000*color[i]+dia[i]]) {
							++closed,++beauty;
						}
				else {
					++closed;
				}
			}
		}
cout<<closed<<""<<beauty<<endl;
return 0;
}
			

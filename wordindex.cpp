#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
char word[7];
int len,sum=0,flag=1;
cin>>word;
//printf("a:%cn",97);
len=strlen(word);
for(int i=0;i<len;++i) {
		if(i==0) { sum+=(int)word[i]-96; continue; }
		else {
			if(word[i]>word[i-1]) {
				sum+=(int)(word[i]-96)+26; 
		}
		else { cout<<0;flag=0;   }
}               
}
if(flag==1) cout<<sum;
return 0;
}



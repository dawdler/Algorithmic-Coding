#include<iostream>
#include<cstring>
#define MAX 100010

using namespace std;
int find(char a[],int n) {
	int cnt[333];
memset(cnt,0,sizeof(cnt));
for(int i=0;i<n;i++) cnt[a[i]]++;
for(int i=0;i<333;i++) 
	if(cnt[i]>=2) return 1;
return 0;
}


int main() {
    char first[MAX],second[MAX];
//int i=-1,j=-1,k=0;	
cin>>first>>second;
int p=strlen(first);
	if(p!=strlen(second))  { cout<<"NO\n"; return 0; }
	else //when both strings are of same length
	 {
		if(!strcmp(first,second)) { //both strings r equal
                            int c=find(first,p);
			if(c) { cout<<"YES\n"; return 0;} 
			else  { cout<<"NO\n"; return 0; }
                     }
int i=-1,j=-1,k=0;
	

			for(int m=0;m<p;m++) {
			if(first[m]!=second[m])	{
				k++;
			if(i==-1) i=m;//store the position where strings differ
			else j=m;
}
}
if(k!=2)  {cout<<"NO\n";return 0;} 
else { 
	char temp;
	temp=first[i];
first[i]=first[j];
first[j]=temp;
if(!strcmp(first,second)) cout<<"YES\n";
else cout<<"NO";
}
}
return 0;
}





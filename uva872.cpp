#include<iostream>
#include<cstdio>
#include<cctype>
#include<cstring>
#include<sstream>
#include<algorithm>

using namespace std;
bool constraint[26+5][26+5];
char input[500];
        bool blank=false;
        char variables[30];
int length=0;
bool avail[26+5];
char output[30];
stringstream ss;
bool check_cons(int len,int in) { 
		for(int i=0;i<len;++i){ 
		if(constraint[in][output[i]-'a']) return false;
			
			
			}
			return true;
		}

void bkt(int len) { 
	if(len==length) { 
		for(int i=0;i<length;++i) cout<<output[i];
		cout<<"\n";
		return;
		}

for(int i=0;i<length;++i) { 
	if(avail[i] && check_cons(len,variables[i]-'a')) {
	output[len]=variables[i];
	avail[i]=false;
	bkt(len+1);
	avail[i]=true;
	}
		}
	
	}
int main() { 
	int t;
	cin>>t;
	char temp;
	while(t--) { 
	memset(constraint,0,sizeof constraint);
	cin>>temp;
	gets(input);
	
	for(int i=0;i<strlen(input);++i) { 
		if(isalpha(input[i])) 
		variables[length++]=input[i];
		}
	sort(variables,variables+length);

		/*gets(input);
		char first,second;
		for(int i=0;i<strlen(input);++i) { 
			if(isalpha(input[i])) { 
				first=input[i];
				i++;
			while(!isalpha(input[i])) i++;
			second=input[i];
			constraint[first-'a'][second-'a']=true;	
		}


	
		}*/ 
	getline(cin, input);
        ss.clear();
        ss.str(line);
	char first,b,second;
        
        while(ss >> first >> b >> second)
            constraint[first-'a'][second-'b']=true;
	
	if(blank) cout<<"\n";
	blank=true;
	bkt(0);
	}

return 0;
}

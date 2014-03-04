#include<iostream>
#include<string>

using namespace std;

int main()
{
int flag=0;
string s1,s2;
int t;
cin>>t;
	while(t--) {
	flag=0;
	cin>>s1>>s2;
	string temp1=s1,temp2=s2;
	if(s1.length()==s2.length()) {//1st case
			if(s1==s2) { cout<<"YES"<<endl; continue; }
		else { cout<<"NO"<<endl;	continue; }
		}
		int count=0;
if(s1.length()>s2.length()) {
		while(count<100) { 
		s2+=temp2;
		if(s2.length()>s1.length()) {  count++; s1+=temp1;  }
		if(s2==s1) { cout<<"YES"<<endl; flag=1; break;  }
		if(flag) break;
				}
		
			
	if(!flag) { cout<<"NO"<<endl; continue; }
	continue;
	}
count=0;

if(s2.length()>s1.length()) {
                while(count<100) { 
                s1+=temp1;
                if(s1.length()>s2.length()) {count++; s2+=temp2; }
                if(s2==s1) { cout<<"YES"<<endl; flag=1;   }
		if(flag) break;
                                }
        if(!flag) { cout<<"NO"<<endl; continue; }
        }




}

return 0;
}


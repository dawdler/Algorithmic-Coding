#include<iostream>
#include<string>
using namespace std;

int gcd(int a,int b) {
	int t;
	while(b!=0) {
		t=b;
		b=a%t;
		a=t;
	
}
return a;	
}

int lcm(int a,int b) { 

return (a/gcd(a,b))*b;		

}

int main()
{

string s1,s2;
int t;
cin>>t;
        while(t--) {
    int   flag=0;
        cin>>s1>>s2;
        string temp1=s1,temp2=s2;
        if(s1.length()==s2.length()) {//1st case
                        if(s1==s2) { cout<<"YES"<<endl; continue; }
                else { cout<<"NO"<<endl;        continue; }
                }
if(s1.length()>s2.length()) { 
  //find s2 in s1
	if(s1.substr(0,s2.length())!=s2) { 
		cout<<"NO"<<endl; 
		flag=1;
		}

	
		}
if(flag) continue;

if(s2.length()>s1.length()) { 
  //find s2 in s1
     if(s2.substr(0,s1.length())!=s1) { 
                cout<<"NO"<<endl;
                flag=1;
                }


                }
if(flag) continue;



int lc=lcm(s1.length(),s2.length());
	while(s1.length()!=lc) {
			s1+=temp1;
		}
	while(s2.length()!=lc) {
		s2+=temp2;
		}
		if(s1==s2) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
}		
return 0;
}




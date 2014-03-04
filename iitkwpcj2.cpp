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
    //    string temp1=s1,temp2=s2;
        if(s1.length()==s2.length()) {//1st case
                        if(s1==s2) { cout<<"YES"<<endl; continue; }
                else { cout<<"NO"<<endl;        continue; }
                }


int gc=gcd(s1.length(),s2.length());
//extract the string of length gc from s1 and s2
string s3=s1.substr(0,gc);
string s4=s2.substr(0,gc);
string temp1=s3,temp2=s4;
while(s3.length()<s1.length()) {
		s3+=temp1;

} 

while(s4.length()<s2.length()) { 
	s4+=temp2;
	}
//cout<<s3<<" "<<s4<<endl;
/*if(s3==s4) cout<<"YES\n";
else cout<<"NO\n";*/
if(s3== s1 && s4==s2) cout<<"YES\n";
	else cout<<"NO\n";
}

return 0;
}


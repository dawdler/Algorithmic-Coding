#include<iostream>
#include<cmath>
#define MAX 25
using namespace std;

string Reverse(string &theWord)
{       // Reverse the string contained in theWord.

        int i;
        char temp;
        
        for (i=0; i<theWord.length()/2; i++)
        {
        	temp = theWord[i];
        	theWord[i] = theWord[theWord.length()-i-1];
        	theWord[theWord.length()-i-1] = temp;
        }
return theWord;
}  

int main()
{

unsigned long long N,max=0,sum=0;
int digits=0;

unsigned long long i,j,N0,temp,count,lp;
unsigned long long rem,t;
cin>>t;
while(t--) {

cin>>N;
string ans;
max=0,digits=0;
//finding the largest j such that sj<=N

	for(j=0;j<MAX;++j) {
	sum=0;	
for(i=0;i<=j;++i) {
				sum+=pow(5,i);
		}
if(sum<=N) {max=sum; count=j; }
else break;
}
//cout<<"Sum:"<<max<<endl;
//cout<<"Count:"<<count<<endl;
N0=N-max;
//cout<<"N0:"<<N0<<endl;
temp=N0;
while(temp!=0) {
		++digits;
		rem=temp%5;
		temp=temp/5;
		
//		cout<<"Rem:"<<rem<<endl;
		if(rem==0) { ans+='m';continue;}
		if(rem==1) {ans+='a';continue; }
		if(rem==2) { ans+='n';continue; }
		if(rem==3) { ans+='k';continue; }
		if(rem==4) { ans+='u';continue;}
		//if(rem==5) { ans+='F';continue; }
}
//cout<<"Digits:"<<digits<<endl;
//cout<<ans<<endl;
lp=count+1-digits;
//cout<<"lp:"<<lp<<endl;
	for(i=1;i<=lp;++i) ans+='m';		

//cout<<ans<<endl;
ans=Reverse(ans);
cout<<ans<<endl;
}
return 0;
}

 


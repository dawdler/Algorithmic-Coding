#include<iostream>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;
#define MAX 250
int main()
{
    int p,q,n,t,cnt1,cnt2,i,j,a=0,b=0;
	char s1[MAX];
	char s2[MAX];
    char vow[6]="AUEOI";
    char cons[22]="JSBKTCLDMVNWFXGPYHQZR";
    cin>>t;
    for(j=1;j<=t;j++){
               cin>>n;
               //string s1="";
		//string s2="";
               a=0,b=0;
		p=0;q=0;
               cnt1=cnt2=0;
               for(i=1;i<=n;i++){
                                 if(i%2!=0){
                                            s1[a++]=vow[p];
                                            cnt1++;
                                            if(cnt1>21){p++;cnt1=0;}
                                 } else if(i%2==0){
                                            s2[b++]=cons[q];
                                            cnt2++;
                                            if(cnt2>5){q++;cnt2=0;}
                                  }
               }
sort(s1,s1+strlen(s1));
sort(s2,s2+strlen(s2));
               cout<<"Case "<<j<<": "<<s1<<endl;
   }
cout<<"\n\n\n";
   return 0;
}

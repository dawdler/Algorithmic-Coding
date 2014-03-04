#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int main()
{
int t,n,c=0;
char vowel[]={'A','E','I','O','U'};
char current_v=vowel[c];
char current_c='J';
cin>>t;
for(int j=1;j<=t;++j) {
	cin>>n;
	c=0;
	current_v=vowel[0];
	current_c='J';
	cout<<"Case "<<j<<": ";
	map<char,int>count;
	for(int i=1;i<=n;++i) {
		if(i%2!=0) { //case of vowels		
			if(count[current_v]<21) {
				cout<<current_v;
				count[current_v]++;
			}
		else {
				current_v=vowel[c];++c;
				cout<<current_v;
				count[current_v]++;
			}
	}
if(i%2==0) {//case of consonants
		if(count[current_c]<5) {
			cout<<current_c;
			count[current_c]++;
			}
		else { if(current_c+9>90 ) {	
			current_c='B';
			count[current_c]++;
			cout<<current_c;
			} else {
			current_c=current_c+9;
			cout<<current_c;
			count[current_c]++;  }
	}

}
}
cout<<"\n\n\n";
}

return 0;
}



						

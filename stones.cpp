#include<iostream>
using namespace std;
int main()
{
string word;
int test;
cin>>test;
while(test--) {
		int count=0;
		cin>>word;
		for(int i=0;i<word.length();++i) {
			if(word[i]==word[i+1]) ++count;
			}
cout<<count<<endl;
return 0;
}

}

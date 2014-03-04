#include<iostream>
#include<map>
using namespace std;
int main()
{
string word;
int n;
map<string,int>M;
cin>>n;
while(n--) {
		cin>>word;
		if(M.count(word)==0) {
		cout<<"OK"<<endl;
		M[word]++;
		}
	else {
		cout<<word<<M[word]<<endl;
		M[word]++;
}
}
return 0;
}

		

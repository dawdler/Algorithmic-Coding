#include<iostream>
#include<string>

using namespace std;

int main() { 
	int t;
	long long divide;
	long long int clue;
cin>>t;	
	while(t--) { 
	long long int ten=10;
	int flag=false;
	long long int ans =999999999999;
	divide=11;
	cin>>clue;
	while(divide<=clue) { 
	long long int temp=clue/divide;
	if(clue%divide==0) { 
	flag=true;
		if(temp<ans) ans=temp;
	}
	divide=divide+ten*10;
	ten=ten*10;
	}
	if(flag)
	cout<<ans<<endl;
	else cout<<clue<<endl;
	}

	
	
return 0;
	
}
	


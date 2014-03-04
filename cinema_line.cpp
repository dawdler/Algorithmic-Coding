#include<iostream>
#define MAX 100010
using namespace std;

int main() { 
	int a=0,b=0,c=0;
	int n;
	cin>>n;
	int num;
	for(int i=0;i<n;++i) { 
		cin>>num;	
		if(num==25) a++;
		else if(num==50) { 
			if(a>0) { 
				a--;b++;	
					}
			else { cout<<"NO"<<endl;  return 0;}
			}
		else { 
		if(b>0) { if(a>0)  { a--;b--; }
				else { cout<<"NO"<<endl; return 0;
				}
		}
		
		else if(a>2) a-=3;
		else { cout<<"NO"<<endl; return 0;}
	
			
			}

		
				
	
		}
	cout<<"YES"<<endl;
	return 0;
}
	

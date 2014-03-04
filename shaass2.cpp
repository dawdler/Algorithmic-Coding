#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 110
struct book {
	int thick;
	int width;
	}books[MAX];

bool mycomp(const book &a,const book &b) {
		return a.width>b.width;
	}

int main()
{
int n;
int total_t=0,w_acc=0;
int temp=0;
int total_w=0;
int temp1;
cin>>n;
for(int i=0;i<n;++i) {
		cin>>books[i].thick>>books[i].width;
		
	}
sort(books,books+n,mycomp);
//include first one

/*for(int i=0;i<n;++i) {
	cout<<books[i].thick<<" "<<books[i].width<<endl;
	}*/

total_t=books[0].thick;
for(int i=1;i<n;++i) {
		//check whether this object can be include or not
		if((books[i].width+total_w)<=total_t) {
			total_w+=books[i].width;
			}
			else total_t+=books[i].thick;
		}
cout<<total_t<<endl;

			
	
return 0;
}



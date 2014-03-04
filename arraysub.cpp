#include<iostream>
#include<deque>

using namespace std;
#define MAX 1000001

int arr[MAX];

void maximum_sum(int n,int k) {
int i;
std::deque<int> Q(k);

for(int i=0;i<k;++i) { 
	
while((!Q.empty()) && arr[i]>=arr[Q.back()])
	Q.pop_back();
Q.push_back(i);	
}


for(;i<n;++i) {  //rest of the list
cout<<arr[Q.front()]<<" ";
	
while((!Q.empty()) && Q.front()<=i-k)
	Q.pop_front();

while((!Q.empty()) && arr[i]>=arr[Q.back()])
	Q.pop_back();
	
Q.push_back(i);
	}
cout<<arr[Q.front()];
}

int main()
{

int n,k;
cin>>n;
for(int i=0;i<n;++i) cin>>arr[i];
cin>>k;
maximum_sum(n,k);
return 0;

} 

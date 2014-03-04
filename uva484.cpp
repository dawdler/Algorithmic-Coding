#include<iostream>
#include<vector>
#include<map>
#include<cstdio>


using namespace std;
vector<int> result;
int main()
{
//vector<int>result;
vector<int>::iterator it;
int num;
map<int,int> list;
while(cin>>num) {
	if(list[num]>=1)
	list[num]++;
	else  { 
		result.push_back(num);
		list[num]=1;
		}
	}

for(it=result.begin();it!=result.end();it++) 
cout<<(*it)<< " " <<list[(*it)]<<endl;

}



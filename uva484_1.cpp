using namespace std;
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<vector>
#include<limits>
#include<map>
#define LLU long long unsigned int
#define LLD long long double
#define FOR(i,N) for(int i=0;i<(N);i++)
vector<int> inp;
int main()
{
    int n;
    vector<int>::iterator it;
//pair<int,int> temp;
    map <int,int> occ;
    while(cin>>n)
    {
        if(occ[n]>=1)
            occ[n]++;
        else
        {
            inp.push_back(n);
            occ[n]=1;
        }
    }
    for(it=inp.begin();it!=inp.end();it++)
    cout<<(*it)<< " " <<occ[(*it)]<<endl;
}

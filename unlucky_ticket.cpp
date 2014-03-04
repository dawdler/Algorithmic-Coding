 #include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <list>
#include <set>
#include <climits>
#include <map>
#include <stack>
#include <queue>
#include <complex>
#include <cmath>
#include <sstream>
#include <deque>
#include <utility>
#include <bitset>
#include <ext/hash_set>
#include <ext/hash_map>
using namespace std;
using namespace __gnu_cxx;
#define F first
#define S second
#define mp make_pair
#define oo (double)1e9
#define FOR(i,n) for (int i = 0 ; i < n ; i++)
#define READ(s) freopen(s, "r", stdin)
#define WRITE(s) freopen(s, "w", stdout)
#define DFS_WHITE 0
#define DFS_BLACK 1
string s1 = ""  , s2  = "" , s;
int n  ;
void get(string & ret , int idx , int cnt ){
if (cnt == n)return ;
ret = ret +  s[idx] ;
get(ret , idx+1 , cnt+1) ;
}
int tst(int idx){
if (idx == n)return 0 ;
if (s1[idx] <s2[idx]) return tst(idx+1) ;
if (s1[idx] == s2[idx] ) return tst(idx+1) + 2*n ;
return tst(idx+1) + 1;
}

int main () {
cin>>n ;
cin>>s;
get(s1,0 , 0);

get(s2,n , 0);

sort(s1.begin() , s1.end() ) ;
sort(s2.begin() , s2.end() ) ;
//cout<<s1<<" "<<s2<<endl;
int x = tst(0);
if (x == 0 || x == n)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}

#include <stdio.h>
#include <algorithm>
using namespace std;
const int base = 1<<17;
struct tree
{
    int toggle,onCnt,offCnt;
} node[base<<1];
int QueryOneNode(int n)
{
    int r1 = node[n].onCnt;
    int r2 = node[n].offCnt;
    int tg = 0;
    for (int x=(n>>1);x>=1;x>>=1) tg ^= node[x].toggle;
    return tg?r2:r1;
}
int QueryInterval(int i,int j)
{
    i+=base; j+=base;
    int ret = 0;    
    while (i<j)
    {
        if (i&1) ret += QueryOneNode(i++);
        if (~j&1) ret += QueryOneNode(j--);
        if (i>=j) break;
        i>>=1;j>>=1;
    }
    if (i==j) ret += QueryOneNode(i);
    return ret;
}
void ToggleOneNode(int n)
{
    node[n].toggle ^= 1;
    swap(node[n].onCnt,node[n].offCnt);
    for (int x=(n>>1);x>=1;x>>=1)
    {
        node[x].onCnt = node[x*2].onCnt + node[x*2+1].onCnt;
        node[x].offCnt = node[x*2].offCnt + node[x*2+1].offCnt;
        if (node[x].toggle) swap(node[x].onCnt,node[x].offCnt);
    }
}
void ToggleInterval(int i,int j)
{
    i+=base,j+=base;
    while (i<j)
    {
        if (i&1) ToggleOneNode(i++);
        if (~j&1) ToggleOneNode(j--);
        if (i>=j) break;
        i>>=1;j>>=1;
    }
    if (i==j) ToggleOneNode(i);
}
 



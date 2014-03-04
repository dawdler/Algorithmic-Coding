#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;
 
char in[1000];
 
bool comp(const char &a, const char &b)
{
    int delta = a|32 - b|32;
    return delta?delta<0:a<b;
}
int main()
{
    int test, len;
    scanf("%d",&test);
    getchar();
    while (test--)
    {
        gets(in);
        len = strlen(in);
        sort(in,in+len,comp);
 
        do
        {
            cout << in << endl;
        } while (next_permutation(in,in+len,comp));
    }
    return 0;
}

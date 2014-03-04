#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
    long int n,sq;
    //freopen("in.txt","r",stdin);
    while(cin>>n&&n)
    {
        sq=sqrt(n);
        if(sq*sq==n)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    exit(0);
}

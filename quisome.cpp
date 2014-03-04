
#include<iostream>
#include<cstdio>
using namespace std;
long square[10001];
int main()
{
    register long d,i,k,lim,num,rev,div;
    //freopen("in.txt","r",stdin);
    for(i=0;i<=10000;i++)
        square[i]=i*i;
    while(scanf("%ld",&d)==1)
    {   
        switch(d)
        {
            case 2:lim=99;div=10;break;
            case 4:lim=9999;div=100;break;
            case 6:lim=999999;div=1000;break;
            case 8:lim=99999999;div=10000;break;
        }
        for(i=0;square[i]<=lim;i++)
        {
            num=square[i]/div;
            rev=square[i]%div;
            k=num+rev;
            cout.width(d);
            cout.fill('0');
            if(k*k==square[i])
                cout<<square[i]<<endl;
        }
    }
    return 0;
}
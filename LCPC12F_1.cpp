#include<iostream>
#include<vector>
#include<string.h>
#include<set>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
typedef long long int ll;
ll ar[1000005];
ll a[1000005];
int main()
{
   ll t,i,j,n,k=1,c,x;
    cin>>t;
    while(t--)
    {
        memset(ar,0,sizeof(ar));
        cin>>x>>n;
        rep(i,n)
        {
            cin>>a[i];
            ar[a[i]]++;
        }
        c=0;

        rep(i,n)
        {
            if(ar[abs(x-a[i])])
            {
               // cout<<"hie ";
                if(abs(x-a[i])==a[i])
                {
                    c+=(long long int)(ar[a[i]]*(ar[a[i]]-1)/2);
                    ar[a[i]]=0;
                }
                else
                {
                    c+=ar[a[i]]*ar[abs(x-a[i])];
                    ar[a[i]]=0;
                    ar[abs(x-a[i])]=0;
                }
            }
        }

        cout<<k++<<". "<<c<<endl;
    }

   return 0;
}

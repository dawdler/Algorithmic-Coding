#include <iostream>
using namespace std;
int main (int argc, const char * argv[])
{
    int k,n,m;
    int x,y;
    cin>>k;
    while (k!=0) {
        cin>>n>>m;
        while (k--) {
            cin>>x>>y;
            if (x==n||y==m) {
                cout<<"divisa\n";
                continue;
            }else{
                if (x<n) {
                    if (y<m) {
                        cout<<"SO\n";
                    }else{
                        cout<<"NO\n";
                    }
                    
                }else{
                    
                    if (y<m) {
                        cout<<"SE\n";
                    }else{
                        cout<<"NE\n";
                    }
                    
                }
            }
        }
        cin>>k;
    }
        
    return 0;
}


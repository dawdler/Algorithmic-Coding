#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
long long int a [30] [4];

// Calculate F_n written in matrix form
// A [0] [0], a [0] [1]
// A [0] [2], a [0] [3],

// The initial state is 1,1,1, 0

// Use dichotomy can

long long int f (long int n, int M, int e)
{
if (n == 0) a [0] [0] = 1;
else if (n == 1)
{
a [e] [0] = a [e] [1] = a [e] [2] = 1; a [e] [3] = 0;
}

else
{
//cout<<"I m here"<<endl;
f (n / 2, M, e +1);
long long int b [4];
b [0] = a [e] [0] = (a [e +1] [0] * a [e +1] [0] + a [e +1] [1] * a [e +1] [2])% M;
b [1] = a [e] [1] = (a [e +1] [0] * a [e +1] [1] + a [e +1] [1] * a [e +1] [3])% M;
b [2] = a [e] [2] = (a [e +1] [2] * a [e +1] [0] + a [e +1] [3] * a [e +1] [2])% M;
b [3] = a [e] [3] = (a [e +1] [2] * a [e +1] [1] + a [e +1] [3] * a [e +1] [3])% M;
if (n% 2)
{
//cout<<"I m here at n%2"<<endl;
a [e] [0] = (b [0] + b [1])% M;
a [e] [1] = b [0]% M;
a [e] [2] = (b [2] + b [3])% M;
a [e] [3] = b [2]% M;
}
}
if(e==0) return(a[0][0]);
}

int main ()
{
long long int n,sum;
int m;
while (cin >> n >> m)
{
sum=0;
long long int M =m;
for(int i=1;i<=n;++i) {
sum+=f (n-i, M, 0); 
}
// here is n-1 Squared, not the n-th power
//cout << a [0] [0] << endl;
cout<<sum<<endl;
}
return 0;
} 

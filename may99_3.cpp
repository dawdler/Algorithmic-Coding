#include <cstdio>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
while(b) b ^= a ^= b ^= a %= b;
return a;
}

int cnt(int A, int B, int C) {
int move = 1, a = A, b = 0, pour;
while(a != C && b != C) {
pour = min(a, B-b);
b += pour;
a -= pour;
move++;
if(a == C || b == C) break;
if(b==B) b = 0, move++;
else if(a==0) a = A, move++;
}
return move;
}

int main() {
int a, b, c, t,flag,min1;
scanf("%d", &t);
while(t--) {
flag=0;
scanf("%d%d%d", &a, &b, &c);
if(c > a && c > b) printf("NO\n");
else if(!c) printf("YES\n");
else if(c == a || c == b) printf("YES\n");
else if(c % gcd(a, b)) printf("NO\n");
else  { min1=min(cnt(a, b, c), cnt(b, a, c)); flag=1; }
if(flag==1) printf("YES\n");
}
return 0;
}


#include<cstdio>
#include<iostream>

int jose(int n,int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position 
       k%n + 1 as position 1 */
    return (jose(n - 1, k) + k-1) % n + 1;
}
int main()
{
int n, t[7] = {1,10,100,1000,10000,100000,1000000};
char str[10];
while(scanf("%s", str)==1)
{
n = ((str[0]-'0')*10 + str[1]-'0')*t[str[3]-'0'];
if(!n) break;
printf("%d\n", jose(n,2));
}
return 0;
}

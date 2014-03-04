#include<stdio.h>
#include<string.h>
long long unsigned int len;
long long unsigned int dp[5001];
char str[26];
long long unsigned int solve(int i)
{
        if(i>=len)
                return 1;
        if (dp[i])
                return dp[i];
        if(str[i]=='0')
                return 1;
        long long unsigned int ret = 0;
        ret += solve(i+1);
        if(i+1<len && 10*(str[i]-'0')+(str[i+1]-'0')<=20)
                ret += solve(i+2);
        return dp[i]=ret;
}
main()
{
                memset(str,0,26);
                memset(dp,0,5001);
                scanf("%s",str);
                len = strlen(str);
                printf("%lld\n",solve(0));
        return 0;
}

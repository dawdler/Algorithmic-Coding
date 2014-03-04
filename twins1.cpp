#include <iostream>
#include <cstdio>
#include<cstdlib>
using namespace std;
const int N = 110;
int a[N];
int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}
int main()
{
    int n, i, sum, sum1, ans;
    scanf("%d", &n);
    sum = 0;
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        sum += a[i];//求出总和
    }
    qsort(a, n, sizeof(a[0]), cmp);
    sum1 = 0;
    for (i = 0; i < n; ++i)
    {
        sum1 += a[i];
        if (sum1 > sum - sum1)//所得的大于剩余的
        {
            ans = i + 1;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}

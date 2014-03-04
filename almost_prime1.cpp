    #include <cstdio>
    #include <vector>
    #include <algorithm>
    #include <cstring>
    #define N 1000002
    #define MAX 1000000000001
     
    using namespace std;
     
    typedef long long int ll;
     
    bool mark[N];
    vector <ll> aprimes;
    int TC;
    ll lo, hi;
     
    void sieve()
    {
            memset(mark, true, sizeof mark);
            mark[0] = mark[1] = false;
            for(ll i = 2; i < N; ++i)
                    if(mark[i])
                            for(ll j = i * i; j < N; j += i) mark[j] = false;
    }
     
    void generate()
    {
            for(ll i = 2; i < N; ++i)
                    if(mark[i])
                            for(ll j = i * i; j < MAX; j *= i) aprimes.push_back(j);
    }
     
    int main()
    {
            sieve();
            generate();
            sort(aprimes.begin(), aprimes.end());
            scanf("%d", &TC);
            int tam, count;
            while(TC--)
            {
                    scanf("%lld %lld", &lo, &hi);
                    tam = aprimes.size();
                    count = 0;
                    for(int i = 0; i < tam; ++i)
                            if(aprimes[i] >= lo && aprimes[i] <= hi) count++;
                    printf("%d\n", count);
            }
            return 0;
    }


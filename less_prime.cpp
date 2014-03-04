#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;
 
bool sievePrimes[10005];
int primes[1250];
 
/** Sieve Algorithm to Calculate Next Prime */
void sieve() {
    memset(sievePrimes, true, 10005);
    memset(primes, 0, 1250);
    sievePrimes[0] = false;
    sievePrimes[1] = false;
    int m = sqrt(10000);
    for(int i = 2; i <= m; i++)
        if(sievePrimes[i])
            for(int k = i * i; k <= 10004; k += i)
                sievePrimes[k] = false;
    for(int j = 2, i = 0; j <= 10000; j++) if(sievePrimes[j]) primes[i++] = j;
}
 
int main() {
    sieve();
    int T, N, i;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &N);
        for(i = 0; i < 1250; i++)
            if(primes[i] <= N && (2 * primes[i]) > N) break;
        printf("%d\n", primes[i]);
    }
    return 0;
}

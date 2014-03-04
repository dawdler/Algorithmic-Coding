#include <iostream>
#include<cmath>
using namespace std;
#define MOD 1000000007

int fastpow(int a, int n) {
	int p = 1;
	while (n > 0) {
		if (n % 2 == 1) {
			p = (long long) p * a % MOD;
		}
		a = (long long) a * a % MOD;
		n /= 2;
	}
	return p;
}
int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int n;
		cin >> n;

		int ans = fastpow(3, n) + 3 * (n % 2 ? -1 : 1);
		if (ans < 0) {
			ans += MOD;
		}
		if (ans >= MOD) {
			ans -= MOD;
		}

		cout << ans<< endl;
	}
	return 0;
}


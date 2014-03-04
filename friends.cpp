#include <algorithm>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

typedef char T;
vector<int> parent;
#define setClear() parent.clear()
#define setMake() parent.push_back(parent.size())
#define setUnion(x, y) parent[setFind(x)] = setFind(y)  //set the parent of Set B as parent of Set A that will make them joint sets
int setFind(int x) {
	if (parent[x] == x)
		return x;
	return parent[x] = setFind(parent[x]);
}

int main() {
	int nCase, n, m, a, b;
	scanf("%d", &nCase);
	while (nCase--) {
		// init
		setClear();
		scanf("%d %d", &n, &m);
		for (int i = 0; i < n; ++i)
			setMake();
		// union
		for (int i = 0; i < m; ++i) {
			scanf("%d %d", &a, &b);
			setUnion(a - 1, b - 1);
		}
		// size of largest set
		int maxSize = 0;
		map<int, int> setSize;
		for (int i = 0; i < parent.size(); ++i)
			maxSize = max(maxSize, ++setSize[setFind(i)]);//find the maximum numbers among sets that has same parent
		printf("%d\n", maxSize);
	}
	return 0;
}


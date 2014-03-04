

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;

string to_s(int a) {stringstream ss; ss << a; return ss.str();}

int main() {
	for (int a, b, p, P, N = 0; (scanf("%d", &N) == 1) && N;) {
		a = 1, p = 1, P = (N / 4 + 1 - ((N % 4) ? 0 : 1)), b = P * 4;
		printf("Printing order for %d pages:\n", N);
		while (b > a) {
			printf("Sheet %d, front: %s, %d\n", p, (b-- > N) ? string("Blank").c_str() : to_s(b+1).c_str(), a++);
			if (N > 1)
				printf("Sheet %d, back : %d, %s\n", p, a, (b > N) ? string("Blank").c_str() : to_s(b).c_str());
			b--, a++, p++;
		}
	}
	return 0;
}


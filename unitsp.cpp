#include <iostream>
#include <stdio.h>
using namespace std;
#define INF 1L<<21;
int R, C, r, c, p[102][102];
void print(int r, int c) {
    printf("%d ", r + 1);
    if (c != C - 1) print(p[r][c], c + 1);
}
int main() {
    while (scanf("%d %d", &R, &C) != -1) {
        int g[R][C], s[R][C], minI = 0;
 
        for (r = 0; r < R; ++r)
            for (c = 0; c < C; ++c) {
                cin >> g[r][c];
                s[r][c] = INF;
            }
 
        for (r = 0; r < R; ++r) s[r][C - 1] = g[r][C - 1];
 
        for (c = C - 2; c >= 0; --c)
            for (r = 0; r < R; ++r)
                for (int i = -1; i <= 1; ++i) {
                    int r_p = (r + i + R) % R, k = g[r][c];
                    if (s[r][c] >= k + s[r_p][c + 1]) {
                        if (s[r][c] > k + s[r_p][c + 1] || p[r][c] == -1 || p[r][c] > r_p)
                            p[r][c] = r_p;
                        s[r][c] = k + s[r_p][c + 1];
                    }
                }
 
        for (r = 0; r < R; ++r)
            if (s[minI][0] > s[r][0]) minI = r;
 
        print(minI, 0);
        printf("\n%d\n", s[minI][0]);
    }
    return 0;
}

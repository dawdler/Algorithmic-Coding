#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int track[25], cd[25], optimum_cd[25];
int optimum_top, top, N, cd_length, minimum_space, sum;
 
void max_length(int minutes, int index) {
    if (index == N || minutes - track[index] < 0) {
        if (minutes < minimum_space) {
            minimum_space = minutes, optimum_top = top;
            for (int i = 0; i < top; i++)
                optimum_cd[i] = cd[i];
        }
    } else {
        cd[top++] = track[index];
        for (int i = index + 1; i <= N; i++)
            max_length(minutes - track[index], i);
        top--;
    }
}
 
int main() {
 
    while (scanf("%d %d", &cd_length, &N) != EOF && cd_length && N) {
        for (int i = 0; i < N; i++)
            scanf("%d", track + i);
        top = 0, minimum_space = cd_length, sum = 0;
        for (int i = 0; i < N; i++)
            max_length(cd_length, i);
        for (int i = 0; i < optimum_top; i++) {
            sum += optimum_cd[i];
            printf("%d ", optimum_cd[i]);
        }
        printf("sum:%d\n", sum);
    }
    return 0;
}

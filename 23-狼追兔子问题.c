#include <stdio.h>
#include <string.h>

#define N 10

int main() {
    int i = 0;
    int f[N] = {0};
    // 1 3 6 10 15 21
    int m = 100;
    int d = 0;
    for (i = 0; i < N; i++) {
        f[d] = 1;
        d++;
        d += i;
        d %= N;
        printf("d = %d\n", d);
    }
    for (i = 0; i < N; i++) {
        if (!f[i]) {
            printf("rabbit maybe in %d hollow\n", i);
        }
    }
    printf("\n");

    return 0;
}
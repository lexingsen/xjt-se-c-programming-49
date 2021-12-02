#include <stdio.h>
#include <stdlib.h>
#define N 10

int* f[N];

void Generate() {
    for (int i = 0; i < N; i++) {
        int* line = malloc(sizeof(int) * (i + 1));
        line[0] = 1;
        line[i] = 1;
        for (int j = 1; j <= i - 1; j++) {
            line[j] = f[i - 1][j - 1] + f[i - 1][j];
        }
        f[i] = line;
    }
}

void Destroy() {
    for (int i = 0; i < N; i++) {
        free(f[i]);
        f[i] = NULL;
    }
}


void Show() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", f[i][j]);
            if (j != i) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    Generate();
    Show();
    Destroy();
    return 0;
}
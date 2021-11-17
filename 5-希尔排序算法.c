#include <stdio.h>



void show(int *a, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}


void ShellSort(int *a, int n) {
    int d = 1;
    while (d < n / 3) {
        d = d * 3 + 1;
    }
    int i;
    while (d >= 1) {
        for (i = d; i <= n; i++) {
            int x = a[i];
            int j;
            for (j = i; j >= d && a[j - d] > x; j -= d) {
                a[j] = a[j - d];
            }
            a[j] = x;
        }
        d /= 3;
    }

}


int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    ShellSort(a, n);
    show(a, n);
    return 0;
}
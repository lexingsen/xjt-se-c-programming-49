#include <stdio.h>

int BinSearch(int *a, int n, int t) {
    int l = 0;
    int r = n - 1;
    while (l <= r) {
        int m = (r - l) / 2 + l;
        if (a[m] == t) {
            return m;
        } else if (a[m] < t) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return -1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    printf("%d\n", BinSearch(a, n, 1));
    printf("%d\n", BinSearch(a, n, 5));
    printf("%d\n", BinSearch(a, n, 3));
    printf("%d\n", BinSearch(a, n, -1));
    printf("%d\n", BinSearch(a, n, 100));
    return 0;
}
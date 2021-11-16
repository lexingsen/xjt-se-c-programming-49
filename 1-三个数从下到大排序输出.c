#include <stdio.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int mx = max(max(a, b), max(max(a, c), max(b, c)));
    int mi = min(min(a, b), min(min(a, c), min(b, c)));
    int mid = (a > mi && a < mx) ? a : ((b > mi && b < mx) ? b : c);
    printf("%d %d %d\n", mi, mid, mx);
    return 0;
}
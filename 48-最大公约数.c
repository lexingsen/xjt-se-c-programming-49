#include <stdio.h>

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    int n = 0;
    int m = 0;
    scanf("%d%d", &n, &m);
    printf("gcd(%d, %d) = %d\n", n, m, gcd(n, m));
    return 0;
}
#include <stdio.h>



int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("gcd = %d\n", gcd(a, b));
    printf("gcd = %d\n", lcm(a, b));
    return 0;
}
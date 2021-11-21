#include <stdio.h>



int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int gcd2(int a, int b) {
    while (b) {
        int c = a % b;
        a = b;
        b = c;
        printf("a = %d, b = %d, c = %d\n", a, b, c);
    }
    return a;
}

int lcm(int a, int b) {
    return a * b / gcd2(a, b);
}

int main() {
    int a = 0, b = 0;
    scanf("%d%d", &a, &b);
    printf("gcd = %d\n", gcd2(a, b));
    printf("lcm = %d\n", lcm(a, b));
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 100

/*
求100以内的所有勾股数。
所谓勾股数，是指能够构成直角三角形三条边的三个正整数（a，b，c)
*/

int main() {
    for (int a = 1; a <= N; a++) {
        for (int b = a + 1; b < N; b++) {
            int c = (int) sqrt(a * a + b * b);
            if (c * c == (a * a + b * b) && (a + b > c) && (a + c > b) && (b + c > a) && c <= 100) {
                printf("a = %d, b = %d, c = %d\n", a, b, c);
            }
        }
    }
    return 0;
}


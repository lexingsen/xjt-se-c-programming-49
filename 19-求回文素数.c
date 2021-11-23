#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

求1000以内的所有回文素数。


*/

#define bool int
#define true 1
#define false 0
#define N 1000

bool IsPrime(int x) {
    int i = 0;
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
}

bool IsPalindromic(char* s) {
    int n = strlen(s);
    int i = 0;
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    // 最小的素数为2
    int i = 0;
    int rank = 0;
    char s[16] = {0};
    for (i = 2; i <= N; i++) {
        itoa(i, s, 10);
        if (IsPrime(i) && IsPalindromic(s)) {
            printf("%d is %d\n", rank++, i);
        }
    }
    return 0;
}
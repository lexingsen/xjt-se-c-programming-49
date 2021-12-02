#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define bool int
#define true 1
#define false 0
#define N 100000

/*
自守数是指一个数的平方的尾数等于该数自身的自然数
求100000以内的自守数。
*/

int Count(int x) {
    if (!x) {
        return 1;
    }
    int cnt = 0;
    while (x) {
        cnt++;
        x /= 10;
    }
    return cnt;
}

bool IsAutomorphicNumber(int x) {
    int square = x * x;
    int cnt = Count(x);
    char s[128] = {0};
    char t[128] = {0};
    itoa(square, s, 10);
    itoa(x, t, 10);
    int lens = strlen(s);
    int lent = strlen(t);
    for (int i = lens - 1, j = lent - 1; cnt; i--, j--) {
        if (s[i] != t[j]) {
            return false;
        }
        cnt--;
    }
    return true;
}


int main() {
    for (int i = 0; i <= N; i++) {
        if (IsAutomorphicNumber(i)) {
            printf("i = %d, i*i = %lld\n", i, i * i);
        }
    }
    return 0;
}
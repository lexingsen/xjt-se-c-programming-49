#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define bool int
#define true 1
#define false 0
#define STRLEN 128
#define N 256


/*
打印所有不超过n（取n<256）的其平方具有对称性质的数（也称回文数）。
*/
bool IsPalindromic(int x) {
    char s[STRLEN] = {0};
    itoa(x, s, 10);
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
    for (int i = 0; i < N; i++) {
        if (IsPalindromic(i * i)) {
            printf("%d is palindromic, it's square is %d\n", i, i * i);
        }
    }
    return 0;
}

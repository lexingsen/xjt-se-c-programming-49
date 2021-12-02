#include <stdio.h>

#define bool int
#define false 0
#define true 1

/*
如果整数A的全部因子（包括1，不包括A本身）之和等于B；
且整数B的全部因子（包括1，不包括B本身）之和等于A，
则将整数A和B称为亲密数。求3000以内的全部亲密数。
*/

bool IsIntimateNumber(int a, int b) {
    int sumA = 0;
    int sumB = 0;
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            sumA += i;
        }
    }

    for (int i = 1; i < b; i++) {
        if (b % i == 0) {
            sumB += i;
        }
    }

    return (sumA == b) && (sumB == a);
}

int main() {
    for (int i = 0; i <= 3000; i++) {
        for (int j = 0; j <= 3000; j++) {
            if (IsIntimateNumber(i, j) && i != j) {
                printf("%d and %d is intimate number\n", i, j);
            }
        }
    }
    return 0;
}
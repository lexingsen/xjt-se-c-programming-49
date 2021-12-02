#include <stdio.h>
#include <math.h>
#define bool int
#define true 1
#define false 0

/*
输出所有的“水仙花数”，所谓的“水仙花数”是指一个三位数其各位数字的立方和等于该数本身，
例如153是“水仙花数”，因为：153 = 13 + 53 + 33。
*/

bool IsDaffodilNumber(int x) {
    int a = x % 10;
    int b = x / 10 % 10;
    int c = x / 100;
    if ((int) (pow(a, 3) + pow(b, 3) + pow(c, 3) == x)) {
        return true;
    }
    return false;
}

int main() {
    for (int i = 100; i <= 999; i++) {
        if (IsDaffodilNumber(i)) {
            printf("the %d is daffodil number\n", i);
        }
    }
    return 0;
}



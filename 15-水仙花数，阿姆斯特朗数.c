#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>


/*
阿姆斯特朗数也就是俗称的水仙花数，是指一个三位数，其各位数字的立方和等于该数本身。
例如：153=1^3+5^3+3^3，所以 153 就是一个水仙花数。求出所有的水仙花数。
*/

#define bool int
#define true 1
#define false 0
bool IsNarcissusNumber(int x) {
    int a = x % 10;
    int b = (x /10) % 10;
    int c = (x / 100);
    if (pow(a, 3) + pow(b, 3) + pow(c, 3) == x) {
        return true;
    }
    return false;
}

int main() {
    int i = 0;
    for (i = 100; i <= 999; i++) {
        if (IsNarcissusNumber(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}

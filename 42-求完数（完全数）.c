#include <stdio.h>
#define bool int
#define false 0
#define true 1


bool IsPerfectNumber(int x) {
    // 先获取x的所有因子
    int i = 0;
    int sum = 0;
    for (i = 1; i < x; i++) {
        if (x % i == 0) {
            sum += i;
        }
    }
    return sum == x;
}





int main() {
    for (int i = 2; i <= 10000; i++) {
        if (IsPerfectNumber(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
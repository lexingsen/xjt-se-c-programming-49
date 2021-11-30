#include <stdio.h>



/*
 * 将一个从键盘输入的整数存放到一个数组中，通过程序的运行按照数组中的逆序输出该整数，利用递归的方法解决问题。
 * */

void Print(int* a, int n, int u) {
    if (u == n) {
        return;
    }
    Print(a, n, u + 1);
    printf("%d", a[u]);
    if (u == 0) {
        printf("\n");
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    Print(a, n, 0);
    return 0;
}
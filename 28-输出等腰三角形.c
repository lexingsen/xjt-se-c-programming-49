#include <stdio.h>

/*
本实例要求从键盘输入任意整数 n，通过程序运行输出对应高度为 n 的等腰三角形
 */

void PrintTriangle(int n) {
    // 输出几行
    for (int i = 0; i < n; i++) {
        // 输出每行前的空格
        for (int j = 0; j < n - i -1; j++) {
           putchar(' ');
        }
        // 输出每行*的数量
        for (int j = 0; j <= 2 * i; j++) {
           putchar('*');
        }
        putchar('\n');
    }
}

int main() {
    printf("please input a number means n:\n");
    int n = 0;
    scanf("%d", &n);
    PrintTriangle(n);
    return 0;
}
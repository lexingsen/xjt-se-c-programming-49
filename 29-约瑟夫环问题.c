#include <stdio.h>

/*
编号为 1，2，3，…，n 的 n 个人围坐一圈，任选一个正整数 m 作为报数上限值，
从第一个人开始按顺时针方向报数，报数到 m 时停止，报数为 m 的人出列。
从出列人的顺时针方向的下一个人开始又从 1 重新报数，如此下去，直到所有人都全部出列为止。
*/


int LastRemain(int n, int m) {
    if (n == 1) {
        return 0;
    }
    return (LastRemain(n - 1, m) + m) % n;
}

int main() {
    int n = 0;
    int m = 0;
    printf("please input n and m:\n");
    scanf("%d%d", &n, &m);
    printf("the last remain is %d\n", LastRemain(n, m));
    return 0;
}
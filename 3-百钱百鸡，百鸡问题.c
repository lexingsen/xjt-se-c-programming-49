#include <stdio.h>

/*
中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”，
鸡翁一，值钱五， 一只公鸡 5
鸡母一，值钱三， 一只母鸡 3
鸡雏三，值钱一， 三只小鸡 1
百钱买百鸡，问翁、母、雏各几何？
*/

/*
暴力枚举
*/
int main() {
    int i, j, k;
    for (i = 0; i <= 20; i++) {
        for (j = 0; j <= 33; j++) {
            for (k = 3; k <= 300; k++) {
                if ((i* 5 + j * 3 + k/3) == 100 && k % 3 == 0 && i + j + k == 100) {
                    printf("rooster = %d, hen = %d, chicken = %d\n", i, j, k);
                }
            }
        }
    }
    return 0;
}
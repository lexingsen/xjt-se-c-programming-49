#include <stdio.h>


/*
我国古代数学家张丘建在《算经》一书中曾提出过著名的“百钱买百鸡”问题。
该问题叙述如下：
鸡翁一，值钱五；
鸡母一，值钱三；
鸡雏三，值钱一；
百钱买百鸡，则翁、母、雏各几何？

x+y+z=100         (1)
5x+3y+(1/3)z=100  (2)
(2)*3 - (1): 
7x + 4y = 100
y = 25 - (7/4)x
x = 4k   
y = 25 - 7k
z = 75 + 3k

0 < x, y, z < 100
k 可取 1,2,3
*/

int main() {
    int x = 0;
    int y = 0;
    int z = 0;
    for (int i = 1; i <= 3; i++) {
        x = 4 * i;
        y = 25 - 7 * i;
        z = 75 + 3 * i;
        printf("rooster = %d, hen = %d, chicken = %d\n", x, y, z);
    }
    return 0;
}
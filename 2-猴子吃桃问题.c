#include <stdio.h>


/*
猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
第二天早上又将第一天剩下的桃子吃掉一半，有多吃了一个。
以后每天早上都吃了前一天剩下的一半零一个。
到第 10 天早上想再吃时，发现只剩下一个桃子了。
编写程序求猴子第一天摘了多少个桃子。
*/

/*
思想：递推
x2=x1/2-1  x1=(x2+1)*2
*/

int main() {
    int cnt = 9;
    int x2 = 1;
    int x1 = 0;
    while (cnt > 0) {
        x1 = (x2 + 1) * 2;
        x2 = x1;
        cnt--;
    }
    printf("the number of peach in the first day is : %d\n", x1);
    return 0;
}
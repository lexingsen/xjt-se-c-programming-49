#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
如果一个渔夫从 2011 年 1 月 1 日开始每三天打一次渔，两天晒一次网。
编程实现当输入 2011 1 月 1 日以后的任意一天，输出该渔夫是在打渔还是在晒网。
*/

// 平年和闰年的不同月的天数
int days[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

#define true 1
#define false 0
#define bool int

// 判断是否为闰年
bool IsLeapYear(int x) {
    return ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0));
}

int main() {
    int cnt = 0;
    int year;
    int month;
    int day;
    printf("please input year month day:");
    scanf("%d%d%d", &year, &month, &day);

    int i, j, k;
    for (i = 2010; i < year; i++) {
        cnt += (IsLeapYear(i) ? 366 : 365);
    }
    
    for (j = 1; j <= month - 1; j++) {
        cnt += days[IsLeapYear(year)][j];
    }
    cnt += day;

    if (cnt % 5 == 0 || cnt % 5 == 1 || cnt % 5 == 2) {
        printf("dayu!\n");
    } else if (cnt % 5 == 3 || cnt % 5 == 4) {
        printf("shaiwang!\n");
    }
}
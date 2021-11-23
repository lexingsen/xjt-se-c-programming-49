#include <stdio.h>


typedef int bool;
#define true 1
#define false 0

bool IsLeapYear(int x) {
    return ((x % 400 == 0) || (x %4 == 0 && x % 100 != 0));
}

int main() {
    printf("%d\n", IsLeapYear(2000));
    printf("%d\n", IsLeapYear(2008));
    printf("%d\n", IsLeapYear(2020));
    return 0;
}

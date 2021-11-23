#include <stdio.h>


int main() {
    printf("please input a lowercase:\n");
    char c = getchar();
    printf("%c\n", c);
    if (c >= 'a' && c <= 'z') {
        c ^= 32;
    }
    printf("%c\n", c);
    return 0;
}
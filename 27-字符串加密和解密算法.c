#include <stdio.h>
#include <string.h>

/*
 * 在本实例中要求设计一个加密和解密算法。
 * 在对一个指定的字符串加密之后，利用解密函数能够对密文解密，显示明文信息。
 * 加密的方式是将字符串中每个字符加上它在字符串中的位置和一个偏移值 5。
 * 以字符串“mrsoft”为例，第一个字符“m”在字符串中的位置为0，那么它对应的密文是“'m'+0+5"，即 r。
 * */
#define N 128
char* encode(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        s[i] = s[i] + (i + 5) % N;
    }
    return s;
}

char* decode(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n; i++) {
        s[i] = s[i] - (i + 5 + N) % N;
    }
    return s;
}

int main() {
    char s[N] = {0};
    puts("please input the string:\n");
    gets(s);
    char* t = encode(s);
    printf("encode s is %s\n", t);
    char* ans = decode(s);
    printf("decode s is %s\n", ans);
    return 0;
}
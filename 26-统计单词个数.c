#include <stdio.h>
#include <string.h>
#include <ctype.h>


int count(char* s) {
    int n = strlen(s);
    int i = 0;
    int cnt = 0;
    for (i = 0; i < n; i++) {
        if (isalpha(s[i]) && (s[i + 1] == ' ' || i + 1 == n)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    char s[] = "hello world shi jie ni hao a wo";
    int ans = count(s);
    printf("ans = %d\n", ans);
    return 0;
}
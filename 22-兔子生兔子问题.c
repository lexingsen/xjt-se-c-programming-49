#include <stdio.h>
#include <string.h>

/*
假设一对兔子的成熟期是一个月，即一个月可长成成兔，
那么，如果每对成兔每个月都生一对小兔，一对新生的小兔从第二个月起就开始生兔子，
试问从一对兔子开始繁殖，以后每个月会有多少对兔子？
*/

#define N 100
long long int f[N];

int main() {
    memset(f, 0, sizeof(f));
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    int i = 0;
    for (i = 3; i < N; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i < N; i++) {
        printf("%d's month: %lld\n", i, f[i]);
    }
    return 0;
}
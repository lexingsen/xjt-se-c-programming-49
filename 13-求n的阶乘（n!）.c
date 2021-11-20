#include <stdio.h>
#include <string.h>


#define N 1000
typedef long long int ll;


ll f[N];


// 记忆化递归
ll factorial(int x) {
    if (!x) {
        return 1;
    }
    if (f[x] != 0) {
        return f[x];
    }
    f[x] = x * factorial(x - 1);
    return f[x];
}



int main() {
    memset(f, 0, sizeof(f));
    printf("%d\n", factorial(5));
    return 0;
}
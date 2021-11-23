#include <stdio.h>




#define D 1e-10  // 精度
int main() {
    int i = 1;
    double ans = 1.0, n = 1.0;
    while (1/n > D) {
        ans += 1/n;
        i++;
        n = n * i;
    }
    printf("%f\n", ans);
    return 0;
}
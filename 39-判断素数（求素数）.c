#include <stdio.h>


#define bool int
#define true 1
#define false 0

bool IsPrime(int x) {
    int i = 0;
    for (i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int i = 0;
    for (int i = 2; i <= 100; i++) {
        if (IsPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

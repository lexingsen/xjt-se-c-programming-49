#include <stdio.h>


void Print() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d x %d = %d", j, i, i * j);
            if (j != i) {
                printf(" ");
            }
        }
        printf("\n");
    }
}


int main() {
    Print();
    return 0;
}
#include <stdio.h>



void show(int *a, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d", a[i]);
        if (i != n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}


typedef int bool;
#define true 1
#define false 0

void swap(int *a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void BubbleSort(int *a, int n) {
    int i, j;
    bool flag;
    for (i = 0; i < n - 1; i++) {
        flag = true;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j + 1] < a[j]) {
                swap(&a[j], &a[j + 1]);
                flag = false;
            }
        }
        if (flag == true) {
            break;
        }
    }
}


int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    BubbleSort(a, n);
    show(a, n);
    return 0;
}
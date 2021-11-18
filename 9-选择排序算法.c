#include <stdio.h>
typedef int bool;
#define true 1
#define false 0

void swap(int *a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


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


void SelectSort(int *a, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(&a[minIndex], &a[i]);
        }
    }
}

int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    SelectSort(a, n);
    show(a, n);
    return 0;
}


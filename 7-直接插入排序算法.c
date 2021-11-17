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


void InsertSort(int *a, int n) {
    int i;
    for (i = 1; i < n; i++) {
        int j;
        int e = a[i];
        for (j = i; j >= 1 && a[j - 1] > e; j--) {
            a[j] = a[j - 1]; 
        }
        a[j] = e;
    }
}



int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    InsertSort(a, n);
    show(a, n);
    return 0;
}
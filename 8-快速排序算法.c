#include <stdio.h>
#include <time.h>
#include <stdlib.h>


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


/*
划分区间 [l,p-1] < e e  [p+1, r] > e
*/
int Partition(int *a, int l, int r) {
    int e = a[l];
    int i;
    int j = l;
    for (i = l + 1; i <= r; i++) {
        if (a[i] < e) {
            swap(&a[i], &a[j + 1]);
            j++;
        }
    }

    swap(&a[l], &a[j]);
    return j;
}


void QuickSort(int *a, int l, int r) {
    if (l >= r) {
        return;
    }
    int p = Partition(a, l, r);
    QuickSort(a, l, p - 1);
    QuickSort(a, p + 1, r);
}

int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    QuickSort(a, 0, n - 1);
    show(a, n);
    return 0;
}
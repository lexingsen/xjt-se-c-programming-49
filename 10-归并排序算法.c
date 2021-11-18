#include <stdio.h>
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
这里的m很关键
left = [l, m-1] right = [m, r]
*/
void Merge(int *a, int l, int m, int r) {
    int leftSize = m - l;
    int rightSize = r - m + 1;
    int* left = (int*)malloc(sizeof(int) * leftSize);
    if (!left) {
        printf("malloc fail!");
        return;
    }
    int *right = (int*)malloc(sizeof(int) * rightSize);
    if (!right) {
        printf("malloc fail!");
        return;
    }
    int i = 0;
    for (i = l; i < m; i++) {
        left[i - l] = a[i]; 
    }
    for (i = m; i <= r; i++) {
        right[i - m] = a[i];
    }
    i = 0;
    int j = 0;
    int k = l;
    while (i < leftSize && j < rightSize) {
        if (left[i] <= right[j]) {
            a[k++] = left[i++];
        } else {
            a[k++] = right[j++];
        }
    }
    while (i < leftSize) {
        a[k++] = left[i++];
    }

    while (j < rightSize) {
        a[k++] = right[j++];
    }
    free(left);
    left = NULL;
    free(right);
    right = NULL;
}


void MergeSort(int *a, int l, int r) {
    if (l >= r) {
        return;
    }
    int m = (r - l) / 2 + l;
    MergeSort(a, l, m);
    MergeSort(a, m + 1, r);
    Merge(a, l, m + 1, r);
}


int main() {
    int a[] = {3, 1, 2, 4, 7, 0, 5, 8, 6, 9};
    int n = sizeof(a) / sizeof(int);
    show(a, n);
    MergeSort(a, 0, n - 1);
    show(a, n);
    return 0;
}

#include <stdio.h>


typedef enum {
    BLUE = 1,
    WHITE = 2,
    RED = 3
} Color;

Color arr[] = {RED, BLUE, RED, WHITE, WHITE, RED, WHITE, BLUE, BLUE, RED, WHITE};

void Swap(Color* arr, int i, int j) {
    Color t = arr[i];
    arr[i] = arr[j];
    arr[j] = t;
}

void Print(Color* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Sort(Color* arr, int n) {
    
    int i = 0;
    int j = 0;
    int k = n - 1;
    while (i <= k) {
        if (arr[i] == BLUE) {
            Swap(arr, i++, j++);
        } else if (arr[i] == WHITE) {
            i++;
        } else if (arr[i] == RED) {
            Swap(arr, i, k--);
        }
    }
    return;
}

int main() {
    int n = sizeof(arr) / sizeof(arr[0]);
    Print(arr, n);
    Sort(arr, n);
    Print(arr, n);
}














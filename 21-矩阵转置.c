#include <stdio.h>
#include <stdlib.h>


#define N 100

int a[N][N];
int b[N][N];
/*
利用数组解决线性代数中的矩阵转置问题。
设有一矩阵为m×n阶即m行n列），第i行j列的元素是a(i,j)，需要将该矩阵转置为n×m阶的矩阵，使其中元素满足 b(j,i)=a(i,j)。
*/


void transpose(int a[N][N], int b[N][N], int m, int n) {
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            b[j][i] = a[i][j];
        }
    }
}

void show(int a[N][N], int m, int n) {
    int i = 0;
    int j = 0;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", a[i][j]);
            if (j != n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int m = 0, n = 0;
    printf("please input the matrix's row and column:\n");
    scanf("%d%d", &m, &n);
    int i = 0;
    int j = 0;
    printf("please input the element of matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    show(a, m, n);
    transpose(a, b, m, n);
    show(b, n, m);
    return 0;
}
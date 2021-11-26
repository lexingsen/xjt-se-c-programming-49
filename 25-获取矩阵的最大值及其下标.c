#include <stdio.h>
#include <limits.h>

#define N 3
int main() {
    int matrix[N][N] = {
        {1, 3, 2},
        {5, 1, 2},
        {4, 9, 0}
    };
    int ans = INT_MIN;
    int x = -1;
    int y = -1;
    int i = 0;
    int j = 0;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] > ans) {
                x = i;
                y = j;
                ans = matrix[i][j];
            }
        }
    }
    printf("the matrix max value is %d, the position is (%d, %d)\n", ans, x, y);
    return 0;
}
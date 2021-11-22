#include <stdio.h>
#include <math.h>



double area(int a, int b, int c) {
    double p = (a + b + c) / 2.0;
    return (double) sqrt(p * (p - a) * (p - b) * (p - c));
}

void solve(int a, int b, int c) {
    // 构成三角形的条件：任意两边这和大于第三边
    // 普通 等腰 等边 直角
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        if ((a == b) && (b == c)) {
            printf("等边三角形\n");
        } else if ((a == b) || (b == c) || (a == b)) {
            printf("等腰三角形\n");
        } else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            printf("直角三角形");
        } else {
            printf("普通三角形");
        }
    } else {
        printf("不是三角形");
    }
    
}

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("please input the three length of triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    double s = area(a, b, c);
    printf("area = %lf\n", s);
    solve(a, b, c);
    return 0;
}
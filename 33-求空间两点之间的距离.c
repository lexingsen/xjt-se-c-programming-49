#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x1 = 0, y1 = 0;
    int x2 = 0, y2 = 0;
    printf("please input the index of two point:\n");
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("the distance is %lf\n", distance(x1, y1, x2, y2));
    return 0;
}
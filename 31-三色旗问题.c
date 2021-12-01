#includ <stdio.h>


enum Color {
    BLUE = 1,
    WHITE = 2,
    RED
};

void swap(Color* color, int x, int y) {
    char t = color[x];
    color[x] = color[y];
    color[y] = t;
}

int main() {
    Color color[] = {};
    int n = sizeof(color) / sizeof(char);
    int r = n - 1;
    int w = 0;
    int b = 0;

    while (w <= r) {
        if (color[w] == WHITE) {
            w++;
        } else if (color[w] == BLUE) {
            swap(color, w, b);
            w++;
            b++;
        } else {
            // RED
            while (w < r && color[r] == RED) {
                r--;
            }
            swap(color, r, w);
            r--;
        }
    }
    return 0;
}














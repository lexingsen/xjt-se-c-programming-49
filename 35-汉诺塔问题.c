#include <stdio.h>


void move(char a, char b) {
    printf("%c -> %c\n", a, b);
}

void hanoi(int n, char a, char b, char c) {
    if (n == 1) {
        move(a, c);
        return;
    }
    hanoi(n - 1, a, c, b);
    move(a, c);
    hanoi(n - 1, b, a, c);
}



int main() {
    hanoi(3, 'a', 'b', 'c');
    return 0;
}
#include <stdio.h>

int main() {
    int i = 3;
    int x;
    int x1 = -99;
    int x2 = -99;
    int x3 = -99;

    while (x <= 0) {
        x = x1 + x3 + 100;
        x1 = x2;
        x2 = x3;
        x3 = x;
        i ++;
    }
    printf("x[%d] = %d\n", i, x);
}
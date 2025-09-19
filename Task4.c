#include <stdio.h>

double f3(double x) {
    double y = (x + 1);
    double y2 = y * y;
    return y2 * y2 * y;
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf", f3(x));
}

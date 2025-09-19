#include <stdio.h>

double Rosenbrock2d(double x, double y) {
    double a = 10 * (x * x - y);
    double b = x - 1;
    return a * a + b * b;

}

int main () {

    printf("%g\n", Rosenbrock2d(1, 1));
    printf("%g\n", Rosenbrock2d(2, 4));
    printf("%g\n", Rosenbrock2d(2, 3));
}
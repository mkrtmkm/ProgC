#include <stdio.h>
#include <math.h>

int main () {

    double x;
    double res;
    printf("x = ");
    scanf_s("%lf", &x);
    res = cosh(x);
    printf("cosh(%g) = %lf\n", x, res);
}
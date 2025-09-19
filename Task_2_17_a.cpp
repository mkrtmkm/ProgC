#include <stdio.h>
#include <math.h>

double th(double x) {
    return (exp(x) - exp(-x)) / (exp(x) + exp(-x));
}

double th_derivative(double x) {
    double t = th(x);
    return 1 - t * t;
}

int main() {
    double x;
    printf("x =");
    scanf("%lf", &x);

    printf("th(x) = %lf\n", th(x));
    printf("th'(x) = %lf\n", th_derivative(x));
}

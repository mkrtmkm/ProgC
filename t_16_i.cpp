#include <stdio.h>
#include <math.h>

int main() {
    double x, eps;
    printf("Enter x:");
    scanf("%lf", &x);
    printf("Enter epsilon:");
    scanf("%lf", &eps);

    double sum = 1.0;
    double term = 1.0;
    int n = 1;

    while (fabs(term) >= eps) {
        term = pow(-1, n) * (n + 1) * (n + 2) * pow(x, n) / 2.0;
        sum += term;
        n++;
    }
    printf("Sum = %lf\n", sum);
}
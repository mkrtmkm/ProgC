#include <stdio.h>
#include <math.h>

int main() {
    double eps = pow(10,-6);
    double product = 1.0;
    double y = sqrt(2);
    double term = y / 2;
    product *= term;
    double pi_old = 0.0;
    double pi_new = 2.0 / product;
    int k = 1;

    do {
        pi_old = pi_new;
        y = sqrt(2 + y);
        term = y / 2.0;
        product *= term;
        pi_new = 2.0 / product;
        k++; } while (fabs(pi_new - pi_old) > eps);

    printf("Pi = %.10f\n", pi_new);
    printf("Number of multipliers: %d\n", k);
}

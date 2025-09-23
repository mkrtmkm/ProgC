#include <stdio.h>
#include <math.h>
double tailor(double x, double eps) {
    double y, t;
    int i = 1;
    t = 1; y = t;
    while (fabs(t) < eps) {
        t * (x/i);
        y += t;
    }
    return y;
}

int main() {
    double x, eps;
    do {
        printf("Eps =");
        scanf("%lf", &eps);}
    while (eps <= 0);
        printf("x =");
        scanf("%lf", &x);
        y = tailor(x, eps);
        printf("y = %lf, %lf", y, eps(x));
}
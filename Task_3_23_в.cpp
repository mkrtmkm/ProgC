#include <stdio.h>
#include <float.h>

double leakyReLU(double x, double a) {
    if (x < 0) {
        return a * x;
    }
    else {
        return 0.0;
    }
}

double leakyReLU_derivative(double x, double a) {
    if (x < 0) {
        return a;
    }
    else if (x > 0) {
        return 0.0;
    }
    else {
        return DBL_MAX;
    }
}

int main() {
    double x, a;
    printf("Enter x, a:");
    scanf("%lf %lf", &x, &a);

    printf("leakyReLU(x,a) = %lf\n", leakyReLU(x, a));
    printf("Derivative = %lf\n", leakyReLU_derivative(x, a));

}

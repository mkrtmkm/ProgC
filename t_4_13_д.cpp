#include <stdio.h>
#include <math.h>

int main() {
    int n, k;
    double x, y = 0.0;

    do {
        printf("Enter n:");
        scanf("%d", &n);
        if (n < 0) {
            printf("n must not be negative\n");
        }
    } while (n < 0);

    do {
        printf("Enter x:");
        scanf("%lf", &x);
        if (x <= 0.0 || x >= 1.0) {
            printf("x must be between 0 and 1.\n");
        }
    } while (x <= 0.0 || x >= 1.0);

    for (k = 0; k<=n; k++) {
        y += k*pow(x, k) * pow((1 - x), (n-k));
    }
    printf("y=%g\n", y);
}
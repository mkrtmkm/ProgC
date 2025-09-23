#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    double result_a = 0.0;
    for (int i = 0; i < n; i++) {
        result_a = sqrt(2 + result_a);
    }

    printf("res: %.6lf\n", result_a);
}
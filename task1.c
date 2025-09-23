#include <stdio.h>

double summ(double a) {
    int n = 1;
    double count = 1;
    while (count < a) {
        count += 1.0 / n;
        n++;
    }
    printf("n = %d\n", n);
    return count;
}

int main() {
    double a;
    scanf("%lf", &a);
    summ(a);
    return 0;
}
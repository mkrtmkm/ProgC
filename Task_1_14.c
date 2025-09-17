#include <stdio.h>

int main() {
    double m;
    double v;
    printf("Enter mass:");
    scanf("%lf", &m);
    printf("Enter speed:");
    scanf("%lf", &v);
    double E = m * v * v / 2;
    printf("Kinetic energy = %.2lfJ\n ", E);
}
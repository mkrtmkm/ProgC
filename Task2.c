#include <stdio.h>
#include <math.h>

int main () {

    double a, b, c;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    c = hypot(a, b); //те ж саме що: c = sqrt(a*a + b*b)
    printf("c = %lf\n", c);
}
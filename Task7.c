#include <stdio.h>
#include <math.h>

int main() {

    double x;
    int r1, r2;
    printf("x = ");
    scanf("%lf", &x);
    r1 = (int)x;
    r2 = (int)floor(x);
    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);

}
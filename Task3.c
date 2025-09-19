#include <stdio.h>
#include <math.h>
double perimeter(double a, double b, double c) {
    return a+b+c;
}

int main () {
    double a, b, c, p, s;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = perimeter(a,b,c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%lf\n", s);
}
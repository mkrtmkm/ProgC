#include <stdio.h>
#include <math.h>

double length(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double square (double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p*(p - a)*(p - b)*(p - c));
}

int main() {
    double a_1, a_2;
    printf("Enter A:");
    scanf_s("%lf %lf", &a_1, &a_2);

    double b_1, b_2;
    printf("Enter B:");
    scanf_s("%lf %lf", &b_1, &b_2);

    double c_1, c_2;
    printf("Enter C:");
    scanf_s("%lf %lf", &c_1, &c_2);

    double a = length(b_1, b_2, c_1, c_2);
    double b = length(a_1, a_2, c_1, c_2);
    double c = length(a_1, a_2, b_1, b_2);

    double s = square(a, b, c);

    printf("Area = %lf\n", s);

}
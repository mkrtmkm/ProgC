#include <stdio.h>
#include <math.h>

double area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return fabs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0;
}

double isInside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
    double S = area(x1, y1, x2, y2, x3, y3);
    double S1 = area(x, y, x2, y2, x3, y3);
    double S2 = area(x1, y1, x, y, x3, y3);
    double S3 = area(x1, y1, x2, y2, x, y);

    return fabs(S - (S1 + S2 + S3)) < 1e-6;
}

int main () {
    double x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter the coordinates of the vertices of the triangle:");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    printf("Enter the coordinates of the point:");
    scanf("%lf %lf", &x, &y);

    if (isInside(x1, y1, x2, y2, x3, y3, x, y)) {
        printf("The point belongs to the triangle");
    }
    else {
        printf("The point outside the triangle");
    }
}
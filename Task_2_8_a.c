#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("a =");
    scanf("%d", &a);

    printf("b =");
    scanf("%d", &b);

    printf("c =");
    scanf("%d", &c);

    double m_a = (sqrt(2*b*b + 2*c*c - a*a))/2;
    double m_b = (sqrt(2*a*a + 2*c*c - b*b))/2;
    double m_c = (sqrt(2*a*a + 2*b*b - c*c))/2;

    printf("The median drawn to side a has a length of %f\n", m_a);
    printf("The median drawn to side b has a length of %f\n", m_b);
    printf("The median drawn to side c has a length of %f", m_c);

}
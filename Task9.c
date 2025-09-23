#include <stdio.h>
#include <math.h>

int main() {
    int n, r;
    printf("n = ");
    scanf("%d", &n);
    if (n < 1) return 0;
    r = 1;
    while (pow(2, r) <= n) {
        r ++;
    }
    printf("2^r = 2^%d\n", r);

}
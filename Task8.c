#include <stdio.h>
#include <math.h>

int main() {
    int m, k, r;
    printf("m = ");
    scanf("%d", &m);
    if (m < 1) return 0;
    k = 0, r = 1;
    while (r <= m) {
        r *= 4;
        k ++;
    }
    k --;
    printf("k = %d\n", k);

}
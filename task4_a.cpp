#include <stdio.h>
#include <math.h>
int main() {
    int p = 1;
    int q = 1;
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    for (int i = 1; i <=n; i ++) {
        p /= i;
        q *= (1 + p);
    }
    printf("%d\n", q);
}
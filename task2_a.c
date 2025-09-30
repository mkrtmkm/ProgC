#include <stdio.h>

unsigned long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long F0 = 0, F1 = 1, F = 0;

    for (int i = 2; i <= n; i++) {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
    }
    return F;
}



int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Fib(%d) = %llu\n", n, fib(n));
    return 0;
}

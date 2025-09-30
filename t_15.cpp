#include <stdio.h>

int invertRec(int n, int y) {
    if (n == 0) return y;
    int a = n % 10;
    return invertRec(n / 10, y * 10 + a);
}

int main() {
    int n;
    printf("Enter number:");
    scanf("%d", &n);

    int result = invertRec(n, 0);
    printf("Inversion: %d\n", result);
}

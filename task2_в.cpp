#include <stdio.h>

int fibIndex(unsigned long long a) {
    unsigned long long F0 = 0, F1 = 1, F;
    int index = 1;

    if (a <= 0) return -1;

    while (F1 < a) {
        F = F0 + F1;
        F0 = F1;
        F1 = F;
        index++;
    }
    return index - 1;
}

int main() {
    unsigned long long a;
    printf("Enter a:");
    scanf("%llu", &a);

    int index = fibIndex(a);
    printf("Number %d", index);
}
#include <stdio.h>

int main() {
    unsigned int num;

    printf("Enter 32-bit number:");
    scanf("%u", &num);

    int count = 0;
    unsigned int n = num;
    while (n != 0) {
        count++;
        n >>= 1;
    }
    printf("Count: %d\n", count);
}
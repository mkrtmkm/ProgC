#include <stdio.h>

int main() {
    long long n;
    printf("Enter integer number:");
    scanf("%lld", &n);

    if (n < 0) n = -n;
    int count[10] = {0};

    if (n == 0) {
        count[0] = 1;
    }
    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    int maxCount = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
        }
    }

    int resultDigit = 0;
    for (int i = 0; i < 10; i++) {
        if (count[i] == maxCount) {
            resultDigit = i;
        }
    }
    printf("Repeated digit is %d (occurs %d times)", resultDigit, maxCount);
}

#include <stdio.h>
int main() {
    unsigned n;
    printf("n = ");
    scanf("%u", &n);
    printf("n! = 1"); // printf("n! = %u", n);
    for (unsigned i=2; i<=n; i++) { //for (unsigned i=n-1; i>0; i--)
        printf("*%u", i);
    }
}
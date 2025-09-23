#include <stdio.h>
unsigned long long
dbl_factorial(unsigned char n){
    unsigned long long y = 1L;
    for (unsigned i = n; i > 0; i -=2) {
        y *= i;
    }
    return y;
}
int main() {
    int n;
    printf("n = ");
    scanf("%d",&n);
    long long t = dbl_factorial(n);
    printf("%lld\n",t);
}
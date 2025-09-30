#include <stdio.h>
#include <math.h>

int isFibonacci(int n) {
    long long t1 = 5LL * n * n + 4;
    long long t2 = 5LL * n * n - 4;

    long long s1 = sqrt(t1);
    long long s2 = sqrt(t2);

    return (s1 * s1 == t1) || (s2 * s2 == t2);
}

int main() {
    int N;
    printf("Enter size of array:");
    scanf("%d", &N);

    int arr[N];
    printf("Enter %d integer numbers:", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < N; i++) {
        if (isFibonacci(arr[i])) {
            count++;
        }
    }
    printf("Count of Fibbonachi numbers: %d", count);
}

#include <stdio.h>

#define max 100

int main() {
    double A[max][max];
    int N, M, k;
    double sum = 0.0;

    do {
        printf("Enter N (number of rows):");
        scanf("%d", &N);
    } while (N < 1 || N > max);

    do {
        printf("Enter M (number of columns):");
        scanf("%d", &M);
    } while (M < 1 || M > max);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%lf", &A[i][j]);
        }
    }

    printf("Enter column index k:");
    scanf("%d", &k);

    if (k >= 0 && k < M) {
        for (int i = 0; i < N; i++) {
            sum += A[i][k];
        }
    } else {
        sum = 0.0;
    }

    printf("The sum is %.2lf\n", sum);
}

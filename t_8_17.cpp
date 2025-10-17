#include <stdio.h>

#define MAX 100

void rotateClockwise(double A[MAX][MAX], double B[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            B[j][n - 1 - i] = A[i][j];
}

void rotateCounterClockwise(double A[MAX][MAX], double B[MAX][MAX], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            B[n - 1 - j][i] = A[i][j];
}

int main() {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int size = 2 * n + 1;
    double A[MAX][MAX], B[MAX][MAX];

    printf("Enter elements of matrix(%dx%d):\n", size, size);
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            scanf("%lf", &A[i][j]);

    printf("First matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%6.2lf ", A[i][j]);
        printf("\n");
    }

    char direction;
    printf("\nEnter rotate direction(+ or -):");
    scanf(" %c", &direction);

    if (direction == '+')
        rotateClockwise(A, B, size);
    else if (direction == '-')
        rotateCounterClockwise(A, B, size);
    else {
        printf("Incorrect direction. Turn cloclwise\n");
        rotateClockwise(A, B, size);
    }

    printf("\nMatrix after rotate:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            printf("%6.2lf ", B[i][j]);
        printf("\n");
    }
}

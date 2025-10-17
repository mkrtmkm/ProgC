#include <stdio.h>

int main() {
    double A[3][3] = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0},
        {7.0, 8.0, 9.0}
    };

    int i, j;
    double a;

    printf("Enter indices i and j (from 0 to 2):");
    scanf("%d %d", &i, &j);

    if (i < 0 || i >= 3 || j < 0 || j >= 3) {
        printf("Error: indices out of range!\n");
        return 1;
    }

    printf("Enter new real number a: ");
    scanf("%lf", &a);

    A[i][j] = a;

    printf("Res matrix:\n");
    for (int r = 0; r < 3; r++) {
        for (int c = 0; c < 3; c++) {
            printf("%.2lf ", A[r][c]);
        }
        printf("\n");
    }
}

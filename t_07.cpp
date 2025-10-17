#include <stdio.h>

#define N 255
#define M 255

double det_matrix(double arr[N][M], int n, int j, unsigned rows) {
    if (rows == (1u << n) - 1)
        return 1.0;

    double s = 0.0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        if ((1u << i) & rows)
            continue;
        s += sign * arr[i][j] * det_matrix(arr, n, j + 1, rows | (1u << i));
        sign = -sign;
    }
    return s;
}

void input_matrix(double arr[N][M], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%lf", &arr[i][j]);
        }
    }
}

int main() {
    int n;
    double arr[N][M];

    printf("Enter size of square matrix n:");
    scanf("%d", &n);

    input_matrix(arr, n);

    double determinant = det_matrix(arr, n, 0, 0);
    printf("Determinant = %.6lf\n", determinant);
}

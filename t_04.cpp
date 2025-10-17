#include <stdio.h>

#define N 25
#define M 25

void input_matrix(int arr[N][M], int n, int m) {
    for (int i = 0; i < n; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void output_matrix(int arr[N][M], int n, int m) {
    printf("Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    int arr[N][M];

    printf("Enter number of rows and columns:");
    scanf("%d %d", &n, &m);

    input_matrix(arr, n, m);
    output_matrix(arr, n, m);
}

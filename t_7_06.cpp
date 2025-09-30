#include <stdio.h>
#include <math.h>

#define N 20;

int inputVector(float* arr, int n) {
    int k = 0;
    while (k < n) {
        printf("\na[%d] =", k);
        float tmp;
        scanf("%f", &tmp);
        if (tmp == 0) break;
        arr[k] = tmp;
        k ++;
    }
    return k;
}

void outputVector(const float* arr, int n) {
    int i;
    printf("[");
    for (i = 0; i < n; i++) {
        printf("%f.2", arr[i]);
        for (int j = i + 1; j < n; j++) printf(", ");
    }
    printf("]");
}

int addVectors(const float* v1, const float* v2, float* v3, int n) {
    int i;
    for (i = 0; i < n; i++) {
        v3[i] = v1[i] + v2[i];
    }
}

float scalarProduct(const float* v1, const float* v2, int n) {
    int i;
    float res = 0;
    for (i = 0; i < n; i++) {
        res += v1[i] * v2[i];
    }
    return res;
}

int test() {
    float v1[N];
    float v2[N];
    float v3[N];

    int k1 = inputVector(v1, N);
    outputVector(v1, k1);
    int k2 = inputVector(v2, N);
    outputVector(v2, k2);

    if (k1 != k2) {
        printf("Dimensions %d and %d are not equal!", k1, k2);
        return -1;
    }

    addVectors(v1, v2, v3, k1);
    outputVector(v3, k1);

    float prod = scalarProduct(v1, v2, k1);
    printf("Product = %f", prod);
}

int main() {
    test();
}
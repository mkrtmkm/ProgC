#include <stdio.h>
#include <math.h>

#define N 100
void task1();
void task2();
void task3();
void task4();
void task5();

int main() {
    int num_task = 5;
    switch (num_task) {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 3:
            task3();
            break;
        case 4:
            task4();
            break;
        case 5:
            task5();
            break;
        default: printf("No task with this number");
    }

}

void task1() {
    int a[] = {1, 2, 3, 4, 5};
    int k = 0;

    double x;
    printf("x=");
    scanf("%lf", &x);

    int n = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < n; i++) {
        if (a[i] < x) {
            k++;
        }
    }
    printf("there are %d numbers that greater %lf", k, x);
}

void task2() {
    int a[] = {5, 112, 4, 3};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = n-1; i >= n; i--) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}


int greater_Euler(double arr[N]) {
    int k = 0;
    for (int i = 0; i < N; i++) {
        k+=arr[i] > exp(1) ? 1 : 0;
    }
    return k;
}

int greater_Euler1(const double arr[N], size_t n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        k+=arr[i] > exp(1) ? 1 : 0;
    }
    return k;
}

int greater_Euler2(const double* arr_start, const double* arr_end) {
    int k = 0;
    double* ptr = (double*) arr_start;
    while (ptr != arr_end) {
        k += (*ptr) > exp(1) ? 1 : 0;
        ptr++;
    }
    return k;
}

void task3() {
    double arr[N];
    for (int i = 0; i < N; i++) {
        printf("\na[%d] =", i);
        scanf("%lf", &arr[i]);
    }
    int result = greater_Euler2(arr, arr + N);
    printf("%d", result);
}

int inputArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("\na[%d] =", i);
        scanf("%lf", &arr[i]);
    }
    return n;
}

int maxArray(int* arr) {
    int max = arr[0];
    for (int i = 0; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void task4() {
    int arr[N];
    inputArray(arr, N);
    int result = maxArray(arr);
    printf("%d", result);
}

int inputUnsignedArray(unsigned* arr, int n) {
    int k = 0;
    while (k < n) {
        printf("\na[%d] =", i);
        unsigned tmp;
        scanf("%u", &tmp);
        if (tmp == 0) break;
        arr[k] = tmp;
        k ++;
    }
    return k;
}

void odd_even(const unsigned* arr, int n) {
    int odds = 0, events = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            odds++;
        }
        else {
            events++;
        }
    }
    printf("Odds =%d, Events = %d", odds, events);
}

void task5() {
    unsigned arr[N];
    int arr_size = inputUnsignedArray(arr, N);
    odd_even(arr, arr_size);
}


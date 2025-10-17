#include <iostream>
using namespace std;

static const int N = 20;
static const int M = 20;

void InputMatrix(double Matr[N][M], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter" << i << j << "elem:";
            cin >> Matr[i][j];
        }
    }
}

int main() {
    double Matr[N][M];
    int n, m;
    cin >> n >> m;
    InputMatrix(Matr, n, m);
}
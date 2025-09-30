#include <iostream>
using namespace std;

int find_steps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}

int main() {
    int maxstep = 0;
    int num = 0;
    int n = 0;

    while (n < 1000) {
        int step = find_steps(n);
        if (step > maxstep) {
            maxstep = step;
            num = n;
            n ++;
        }
    }
    cout << maxstep << num << endl;
}
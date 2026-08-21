#include <iostream>
using namespace std;

double myPow(double x, int n) {
    long long power = n;

    if (power < 0) {
        x = 1 / x;
        power = -power;
    }

    double ans = 1;

    while (power > 0) {
        if (power % 2 == 1) {
            ans = ans * x;
        }

        x = x * x;
        power = power / 2;
    }

    return ans;
}

int main() {
    double x=3;
    int n=6;
    cout << "Answer = " << myPow(x, n);

    return 0;
}
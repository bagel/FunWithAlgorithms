#include <iostream>

using namespace std;


double quickMul(double x, int n) {
    if (n == 0) {
        return 1;
    }
    double y = quickMul(x , n / 2);
    return n % 2 == 0 ? y * y : y * y * x;
}

double myPow(double x, int n) {
    return n > 0 ? quickMul(x, n) : 1 / quickMul(x, -n);
}

int main() {
    cout << "2^10: " << myPow(2, 10) << endl;
    cout << "2^-10: " << myPow(2, -10) << endl;
    return 0;
}

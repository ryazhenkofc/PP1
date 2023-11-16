#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(unsigned long long n, int power = 0, unsigned long long sum = 0) {
    if (n == 0) return sum;
    int lastDigit = n % 10;
    return binaryToDecimal(n / 10, power + 1, sum + lastDigit * pow(2, power));
}

int main() {
    unsigned long long n;
    cin >> n;
    cout << binaryToDecimal(n);
    return 0;
}

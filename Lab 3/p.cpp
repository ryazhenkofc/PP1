#include <iostream>
#include <cmath>
using namespace std;

int isSquare(int n) {
    if (n == 0) return 1;
    else {
        int sqrt_n;
        sqrt_n = sqrt(n);
        if ( n == sqrt_n * sqrt_n) return 1;
        else return 0;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;

    if (isSquare(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
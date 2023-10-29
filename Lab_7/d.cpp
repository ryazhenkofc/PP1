#include <iostream>

using namespace std;

int sum_of_digits(string n) {
    int sum = 0;
    for (int i = 0; i < n.length(); i++) {
        sum += n[i] - 48;
    }
    return sum;
}

int main() {
    string s;
    cin >> s;
    cout << sum_of_digits(s);
}
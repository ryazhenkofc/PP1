#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int sum_odd = 0, sum_even = 0;
    for (int i = 1; i < s.size(); i+=2) {
        sum_odd += s[i];
    }
    for (int i = 0; i < s.size(); i+=2) {
        sum_even += s[i];
    }
    if (sum_odd == sum_even) cout << "YES";
    else cout << "NO";
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int>& v, int a, int b) {
    reverse(v.begin() + a, v.begin() + b + 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int a, b;
    cin >> a >> b;

    reverse(v, a, b);

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}

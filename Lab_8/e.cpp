#include <iostream>
#include <vector>

using namespace std;

void erase_range(vector<int>& v, int a, int b) {
    v.erase(v.begin() + a, v.begin() + b + 1);
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

    erase_range(v, a, b);

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}

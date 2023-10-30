#include <iostream>
#include <vector>

using namespace std;

void add_element(vector<int>& v, int k, int a) {
    v.insert(v.begin() + k, a);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k, a;
    cin >> k >> a;

    add_element(v, k, a);

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

void vector_erase(vector<int>& v, int k) {
    v.erase(v.begin() + k);
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int k;
    cin >> k;

    vector_erase(v, k);

    for (int i : v) {
        cout << i << " ";
    }

    return 0;
}

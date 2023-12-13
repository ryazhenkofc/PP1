#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    int k;
    cin >> k;

    int distance = abs(numbers[0] - k);
    int idx = 0;

    for (int i = 1; i < numbers.size(); ++i) {
        int currentDistance = abs(numbers[i] - k);
        if (currentDistance < distance) {
        distance = currentDistance;
        idx = i;
        }
    }
    cout << idx << endl;

    return 0;
}

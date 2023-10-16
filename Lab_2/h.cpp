#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << even << " " << odd  << endl;

    return 0;
}
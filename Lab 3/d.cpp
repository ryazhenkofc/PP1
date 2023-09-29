using namespace std;
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int max_idx = 0;
    int max_value = nums[0];
    for (int i = 1; i < n; ++i) {
        if (nums[i] > max_value) {
            max_value = nums[i];
            max_idx = i;
        }
    }
    cout << (max_idx + 1)<< endl;
    return 0;
}
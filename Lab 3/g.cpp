#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int min_idx = min_element(nums.begin(), nums.end()) - nums.begin();
    int max_idx = max_element(nums.begin(), nums.end()) - nums.begin();
    nums[max_idx] = nums[min_idx];
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
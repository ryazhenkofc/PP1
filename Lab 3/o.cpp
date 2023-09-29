#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());

    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;

}
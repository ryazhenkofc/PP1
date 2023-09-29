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
    vector<int> reverse_nums(n);
    for (int i = 0; i < n; ++i) {
        reverse_nums[i] = nums[n - 1 - i];
        cout << reverse_nums[i] << " ";
    }
}
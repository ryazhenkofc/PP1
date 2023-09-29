#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l, r;
    cin >> n >> l >> r;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    reverse(nums + l - 1, nums + r);

    for(int i = 0; i < n; i++) cout << nums[i] << " ";

    return 0;
}
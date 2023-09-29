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
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += nums[i];
    }
    cout << sum << endl;
    return 0;
}
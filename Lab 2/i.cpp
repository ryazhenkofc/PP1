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
    int count = 0;
    for (int j = 0; j < n; ++j) {
        int num = nums[j];
        if (num % 10 == 7) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
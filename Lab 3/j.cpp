#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int m) {
  int low = 0;
  int high = nums.size() - 1;
  while (low <= high) {
      int mid = low + (high - low) / 2;

      if (nums[mid] == m) return mid;

      if (nums[mid] < m) low = mid + 1;
      
      else high = mid - 1;
    }
  return low;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int result = binarySearch(nums, m);
    cout << result;
    return 0;
}
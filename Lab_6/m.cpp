#include <iostream>
#include <algorithm>
using namespace std;

void reversed(int arr[], int size) {
  reverse(arr, arr + size);
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  reversed(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}

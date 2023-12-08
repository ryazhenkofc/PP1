#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isPalindrome(int n, vector<int>& sequence) {
  for (int i = 0, j = n - 1; i < j; ++i, --j) {
    if (sequence[i] != sequence[j]) {
      return false;
    }
  }
  return true;
}

int main() {
    int n;
    cin >> n;

    vector<int> sequence(n);
    for(int i=0; i<n; i++) {
        cin >> sequence[i];
    }
    sort(sequence.begin(), sequence.end());
    bool found_palindrome = false;

    do {
        if (isPalindrome(n, sequence)) {
        found_palindrome = true;
        for (int i = 0; i < n; i++) {
            cout << sequence[i] << " ";
        }
        break;
        }
    } while (next_permutation(sequence.begin(), sequence.end()));

    if (!found_palindrome) {
        cout << "Impossible";
    }

    return 0;
}

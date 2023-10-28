#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main() {
  string s, t;
  cin >> s >> t;

  unordered_map<char, int> s_counts, t_counts;
  for (char c : s) {
    s_counts[c]++;
  }
  for (char c : t) {
    t_counts[c]++;
  }

  bool are_nearly_equal = true;
  for (auto it = s_counts.begin(); it != s_counts.end(); it++) {
    if (it->second != t_counts[it->first]) {
      are_nearly_equal = false;
      break;
    }
  }

  if (are_nearly_equal) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main() {
//   string s, t;
//   cin >> s >> t;

//   sort(s.begin(), s.end());
//   sort(t.begin(), t.end());

//   bool areEqual = false;
//   if (s.size() == t.size()) {
//     areEqual = true;
//     for (int i = 0; i < s.size(); i++) {
//       if (s[i] != t[i]) {
//         areEqual = false;
//         break;
//       }
//     }
//   }

//   if (areEqual) {
//     cout << "YES" << endl;
//   } 
//   else {
//     cout << "NO" << endl;
//   }

//   return 0;
// }


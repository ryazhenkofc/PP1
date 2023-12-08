#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> seq1(n);
    for (int i = 0; i < n; ++i) cin >> seq1[i];
    vector<int> seq2(m);
    for (int i = 0; i < m; ++i) cin >> seq2[i];

    seq1.erase(unique(seq1.begin(), seq1.end()), seq1.end());
    seq2.erase(unique(seq2.begin(), seq2.end()), seq2.end());

    vector<int> merged;
    auto it1 = seq1.begin(), it2 = seq2.begin();
    while (it1 != seq1.end() || it2 != seq2.end()) {
        if (it1 != seq1.end()) {
            merged.push_back(*it1);
            ++it1;
        }
        if (it2 != seq2.end()) {
            merged.push_back(*it2);
            ++it2;
        }
    }

    merged.erase(unique(merged.begin(), merged.end()), merged.end());

    for (auto element : merged) cout << element << " ";
    cout << endl;

    return 0;
}

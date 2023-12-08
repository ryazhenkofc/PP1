#include <iostream>
#include <algorithm>  
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sequence;

    for (int i = 1; i <= n; ++i) fill_n(back_inserter(sequence), i, i);
    for (auto element : sequence) cout << element << " ";

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareVectors(const vector<int>& v1, const vector<int>& v2) {
    int sum1 = 0;
    int sum2 = 0;
    for(int value : v1) sum1 += value;
    for(int value : v2) sum2 += value;

    if (sum1 != sum2) {
        return sum1 < sum2;
    }

    return false;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v;
    
    for (int i = 0; i < n; ++i) {
        vector<int> row;
        int m;
        cin >> m;
        for (int j = 0; j < m; ++j) {
            int element;
            cin >> element;
            row.push_back(element);
        }
        v.push_back(row);
    }

    sort(v.begin(), v.end(), compareVectors);

    for (const auto& row : v) {
        for (const auto& element : row) {
        cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}

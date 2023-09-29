#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++){
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++){
        cin >> v2[i];
    }
    vector<int> v3 = v1;
    v3.insert(v3.end(), v2.begin(), v2.end());
    sort(v3.begin(), v3.end());
    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    return 0;
}
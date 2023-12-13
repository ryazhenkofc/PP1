#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) cin >> arr1[i];

    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) cin >> arr2[i];

    unordered_set<int> set;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            set.insert(arr1[i] + arr1[j]);
        }
    }
    
    for(int x : arr2){
        if(set.find(x) != set.end()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    bool isCoolMatrix = true;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            if ((arr[i][j] == 0 && arr[i+1][j] == 0 && arr[i][j+1] == 0 && arr[i+1][j+1] == 0) or
                (arr[i][j] == 1 && arr[i+1][j] == 1 && arr[i][j+1] == 1 && arr[i+1][j+1] == 1)) {
                    isCoolMatrix = false;
            }
        }
    }

    if (isCoolMatrix) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    return 0;
}

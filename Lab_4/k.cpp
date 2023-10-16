#include <iostream>

using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        int sum_r = 0;
        for (int j = 0; j < m; j++){
            sum_r += arr[i][j];
        }
        cout << "The sum of row number " << i + 1 << " is " << sum_r << endl;
    }

    for (int i = 0; i < m; i++){
        int sum_c = 0;
        for (int j = 0; j < n; j++){
            sum_c += arr[j][i];
        }
        cout << "The sum of column number " << i + 1 << " is " << sum_c << endl;
    }

    return 0;
}
#include <iostream>
#include <climits>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int idx_i = 0, idx_j = 0;
    long long max = INT64_MIN;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j && arr[i][j] > max){
                max = arr[i][j];
                idx_i = i;
                idx_j = j;
            }
        }
    }
    cout << "Maximum element is: " << max << " with coordinates: " << idx_i + 1 << ";" << idx_j + 1 << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void arr_diff(int m, int n){
    int arr[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    vector<int> v;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i < m - 1){
                int num = abs(arr[i + 1][j] - arr[i][j]);
                v.push_back(num);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}

int main(){
    int n, m = 2;
    cin >> n;

    arr_diff(m,n); 
    return 0;
}

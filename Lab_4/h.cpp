#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int temp[n];
    for (int i=0; i<n; i++){
        int gpa = 0;
        for (int j=0; j<m; j++){
            gpa += arr[i][j];
        }
        temp[i] = gpa;
    }
    auto min = min_element(temp, temp+n);
    auto idx = distance(temp, min);
    
    cout << idx + 1;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    long long max = arr[0][0];
    int a = 0;
    int b = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                a, b = i, j; 
            }
        }
    }
    cout << a + 1 << " " << b + 1;
    return 0;
}
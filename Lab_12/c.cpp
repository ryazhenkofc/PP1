#include <iostream>

using namespace std;

int calculateXOR(int arr[], int size) {
    int result = 0;
    for(int i = 0; i < size; i++) {
        result ^= arr[i]; 
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int xor_result = calculateXOR(arr, n);
    while(xor_result % 2 == 0 and xor_result != 0) {
        xor_result/=2;
    }
    if(xor_result==1) cout << "YES";
    else cout << "NO";
    return 0;
}

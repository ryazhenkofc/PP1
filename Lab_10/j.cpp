#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, rotl;
    cin >> n >> rotl;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    rotate(arr, arr + rotl, arr + n);
    reverse(arr, arr + n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
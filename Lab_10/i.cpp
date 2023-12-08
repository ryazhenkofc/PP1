#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int arr_reversed[n];
    for(int i = 0; i < n; i++) arr_reversed[i] = arr[i];
    reverse(arr_reversed, arr_reversed + n);
    for(int i = 0; i < n; i++){
        if(arr[i] == arr_reversed[i]) cout << "OK" << endl;
        else cout << "Instead of " << arr[i] << " here was " << arr_reversed[i] << endl;
    }
}

#include <iostream>

using namespace std;

string binary_search(int arr[], int n, int x){
    int l = 0, r = n - 1;
    while(l <= r){
        int m = l + (r - l) / 2;
        if(arr[m] == x){
            return "Yes";
        }
        if (arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return "No";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int x;
    cin >> x;
    cout << binary_search(arr, n, x);
}

#include <iostream>
#include <algorithm>

using namespace std;

string cheater(int n, int k, int arr[], bool isCheater = false, int count = 0){
    if(count != n-1){
        if(arr[count+1] - arr[count] <= k) return cheater(n, k, arr, true, count + 1);
        else return cheater(n, k, arr, isCheater, count + 1);
    }
    else return isCheater ? "cheater" : "no";
}

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr+n);

    cout << cheater(n, k, arr);
}
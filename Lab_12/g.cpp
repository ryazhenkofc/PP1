#include <iostream>
#include <algorithm>
using namespace std;

 void printTotalNumberAndTheMaximumNumberOfChips(int arr[], int n){
    int sum = 0;
    sort(arr, arr + n);
    int biggest = arr[n-1];
    for(int i = 0; i < n; i++) sum += arr[i];
    cout << sum << " " << biggest;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    printTotalNumberAndTheMaximumNumberOfChips(arr, n);


    return 0;
}
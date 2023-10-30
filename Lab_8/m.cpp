#include <iostream>
#include <set>
#include <vector>
using namespace std;

int sum_of_uniques(int n, vector<int>& arr){
    set<int> s;
    for(int i : arr) s.insert(i);
    int sum = 0;
    for(int j : s) sum +=j;
    return sum;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << sum_of_uniques(n, arr);
    return 0;
}

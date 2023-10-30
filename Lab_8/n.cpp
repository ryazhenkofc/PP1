#include <iostream>
#include <set>
#include <vector>
using namespace std;

void remove_evens(int n, vector<int>& arr){
    set<int> s;
    for(int i : arr) s.insert(i);
    for(int j : s){
        if(j % 2 != 0){
            cout << j << ' ';
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    remove_evens(n, arr);
    return 0;
}

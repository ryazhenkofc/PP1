#include <iostream>
#include <set>
#include <vector>
using namespace std;

int unique_elements(int n, vector<int>& arr){
    set<int> s;
    for(int i : arr) s.insert(i);
    int counter = 0;
    for(int j : s) counter++;
    return counter;
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << unique_elements(n, arr);
    return 0;
}

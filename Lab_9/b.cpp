#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void sorting_again(int n){
    vector<int> even;
    vector<int> odd;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        x % 2 == 0 ? even.push_back(x) : odd.push_back(x);
    }
    sort(even.rbegin(), even.rend());
    sort(odd.begin(), odd.end());

    for(int x : even) cout << x << " ";
    for(int y : odd) cout << y << " ";
}

int main(){
    int n;
    cin >> n;
    sorting_again(n);
    return 0;
}
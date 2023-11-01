#include <iostream>
#include <vector>

using namespace std;

int number_of_entries(int k, vector<int>& v){
    int count = 0;
    for(int x : v){
        if(x == k) count++;
    }
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << number_of_entries(k, v);
    return 0;
}

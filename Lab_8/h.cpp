#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void k_smallest_numbers(int n, vector<int> v, int k){
    vector<int> nums;
    sort(v.begin(), v.end());
    for(int i = 0; i < k; i++) nums.push_back(v[i]);
    for(int x : nums) cout << x << " ";
}


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int k;
    cin >> k;
    k_smallest_numbers(n, v, k);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sum_of_k_largest(int n, vector<int>& v, int k){
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum = 0;
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    return sum;
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
    cout << sum_of_k_largest(n, v, k);
    return 0;
}
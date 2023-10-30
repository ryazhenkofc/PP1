#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int big_difference(int n, vector<int>& v){
    sort(v.begin(), v.end());
    return (v[n-1]-v[0]);
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << big_difference(n, v);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort_asc(int n, vector<int>& v){
    sort(v.begin(), v.end());
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort_asc(n, v);
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}
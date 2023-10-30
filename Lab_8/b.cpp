#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    reverse(n);
}
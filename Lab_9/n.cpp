#include <iostream>
#include <set>
#include <vector>
using namespace std;


int pairs(int n, vector<int> v){
    set<int> s;
    int count = 0;

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            int num = v[i] xor v[j];
            cout << num << ' ';
            s.insert(v[i]);
        }
    }

    return count;
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout << pairs(n, v);
    return 0;
}

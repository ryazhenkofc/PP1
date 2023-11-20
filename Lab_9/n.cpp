#include <iostream>
#include <vector>
using namespace std;


int pairs(int n, vector<int> v){
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int xorValue = v[i] ^ v[j];
            bool isfound = false;
            for (int k : v) {
                if (k == xorValue) {
                    isfound = true;
                    break;
                }
            }
            if (isfound) {
                count++;
            } 
        }
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    cout << pairs(n, v);
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    pair<int, int> p[n];
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(a + b, i + 1);
    }
    sort(p, p + n);

    for(auto x : p){
        cout << x.second << ' ';
    }    
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector< pair<int, int> > v(n);
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v[i] = make_pair(a, b);
    }
    cout << endl;
    for(auto x : v){
        cout << x.first << ' ' << x.second << endl;
    }    
    return 0;
}
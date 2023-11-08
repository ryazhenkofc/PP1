#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    int total = 0;
    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        m[s] += x;
        total += x;
    }
    for(auto x : m){
        cout << x.first << ' ' << x.second << endl;
    }
    return 0;
}
#include <iostream>
#include <map>
using namespace std;

void serial_counter(int n){
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        m[s] = m[s] + x;
    }

    for(auto it : m){
        cout << it.first << ' ' << it.second << endl;
    }
}

int main(){
    int n;
    cin >> n;
    serial_counter(n);

    return 0;
}
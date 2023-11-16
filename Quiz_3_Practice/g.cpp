#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    map<char, int> m;
    for(int i = 0; i < n; i++){
        char x;
        cin >> x;
        m[x] = 0;
    }

    for(auto x : s){
        if(m.find(x) != m.end()){
            m[x]++;
        }
    }

    for(auto x : m){
        cout << x.first << " - " << x.second << endl;
    }
    return 0;
}
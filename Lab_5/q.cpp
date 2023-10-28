#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int a = 0, b = 0;

    for(int i = 0; i < s.size(); i++){
        a = a + char(s[i]);
    }
    for(int i = 0; i < t.size(); i++){
        b = b + char(t[i]);
    }
    if(b % a == 0){
        cout << "YES";
    }
    else cout << "NO";

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    string alphabet = "abcdefghijklmnopqrstuvwxyza", s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] = alphabet[alphabet.find(s[i]) + 1];
        cout << s[i];
    }
    return 0;
}
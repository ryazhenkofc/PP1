#include <iostream>

using namespace std;

int even_digits(string s) {
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] % 2 == 0){
            count++;
        }
    }
    return count;
}

int main() {
    string s;
    cin >> s;
    cout << even_digits(s);
}
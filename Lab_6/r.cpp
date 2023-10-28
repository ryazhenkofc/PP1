#include <iostream>

using namespace std;

char toUpper(char s){
    96 < s && s < 123 ? s -= 32 : s;
    return s;
}

int main(){
    char s;
    cin >> s;
    cout << toUpper(s);
}
#include <iostream>

using namespace std;

string isTasty(string s){
    int sum = 0;
    for(char c : s){
        sum += c;
    }
    return (sum >= 300 ? "It is tasty!" : "Oh, no!");
}

int main(){
    string s;
    cin >> s;
    cout << isTasty(s);
    return 0;
}
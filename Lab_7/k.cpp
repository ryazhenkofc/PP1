#include <iostream>

using namespace std;

int maximum_digit(string s){
    char max = s[0];
    for(char x : s){
        if(x > max){
            max = x;
        }
    }
    return max - 48;
}

int main(){
    string s;
    cin >> s;
    cout << maximum_digit(s);
}

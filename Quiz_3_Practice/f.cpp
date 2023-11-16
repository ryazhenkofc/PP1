#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(char c : s){
        if(c >= 'a' && c <= 'z'){
            cout << c;
        }
    }
    return 0;
}
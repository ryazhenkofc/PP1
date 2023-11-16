#include <iostream>

using namespace std;

int main(){
    char c;
    cin >> c;
    string s;
    cin >> s;
    for(char ch : s){
        if(ch != c){
            cout << ch;
        }
    }
    return 0;
}
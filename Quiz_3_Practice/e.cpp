#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(char c : s){
        if(c >= '0' && c <= '9'){
            sum += c - '0';
        }
    }
    cout << sum;
    return 0;
}
#include <iostream>

using namespace std;

string isPalindrome(string s){
    return s == string(s.rbegin(), s.rend()) ? "Yes" : "No";
}

int main(){
    string s;
    cin >> s;
    cout << isPalindrome(s) << endl;
}
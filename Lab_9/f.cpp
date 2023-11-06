#include <iostream>
#include <stack>

using namespace std; 
bool isValid(string s) {
    stack<char> stack;
    for (char c : s) {
        if (c == '(') {
            stack.push(c);
        } else if (c == ')') {
            if (stack.empty()) {
                return false;
            }
            stack.pop();
        }
    }
    return stack.empty();
}

int main(){
    string s;
    cin >> s;
    if (isValid(s)) cout << "YES";
    else cout << "NO";
    return 0;
}
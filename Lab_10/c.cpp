#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

bool isHavingSquareNum(string& num, stack<char>& st) {
    for (int i = 0; i < num.length() - 1; i++) {
        string sub = num.substr(i, 2);
        int n = stoi(sub);
        if (sqrt(n) * sqrt(n) == n && floor(sqrt(n)) == sqrt(n)) {
            num.erase(i, 2);
            if(num.length() == 0) {
                return false;
            }
            else{
                return true;
            }
        }
    }
    for(int i = 0; i < num.length(); i++) {
        st.push(num[i]);
    }
    return false;
}


int main() {
    string num;
    stack<char> st;
    cin >> num;

    while (isHavingSquareNum(num, st));

    if(st.empty()){ 
        cout << "Stack is empty"; 
    } 
    else{ 
        while(!st.empty()){ 
            cout << st.top(); 
            st.pop(); 
            if(st.empty()){ 
                return 0; 
            } 
        } 
    } 

    return 0;
}

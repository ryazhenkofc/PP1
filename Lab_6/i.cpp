#include <iostream>

using namespace std;

string capital_even(string s){
    string res = "";
    for(int i = 0; i < s.size(); i++){
        if (i % 2 == 1)
        {
            res += s[i];
        }
        else{
            res += toupper(s[i]);
        }
    }
    return res;
} 

int main(){
    string s;
    cin >> s;
    cout << capital_even(s);
}
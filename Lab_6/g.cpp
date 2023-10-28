#include <iostream>
#include <algorithm>

using namespace std;

void remove_vowels(string s){
    string vowels = "aeiouAEIOU";
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        if(vowels.find(s[i]) != string::npos){
            continue;
        }
        else{
            ans += s[i];
        }
    }
    cout << ans << endl;
    return;
}

int main(){
    string s;
    getline(cin, s);

    remove_vowels(s);

    return 0;
}
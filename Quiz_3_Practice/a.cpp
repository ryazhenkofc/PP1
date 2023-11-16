#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isTrue(string s){
    for(char c : s){
        if(c >= 48 && c <= 57){
            return false;
        }
    }
    return true;
}
int main(){
    vector<string> v;
    string str;
    getline(cin, str);
    string word = "";
    for(int i = 0; i <= str.size(); i++){
        if(str[i] == ' ' or i == str.size()){
            v.push_back(word);
            word = "";
            continue;
        }
        else{
            word += str[i];
        }
    }
    for(string s : v){
        if(isTrue(s)){
            cout << s << endl;
        }
    }
    return 0;
}
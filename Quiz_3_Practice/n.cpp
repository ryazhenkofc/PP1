#include <iostream>

using namespace std;

int main(){
    string s, ans;
    cin >> s;
    for(char c : s){
        if((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')){
            ans.push_back(c);
        }
    }

    cout << ans;
    
    return 0;
}
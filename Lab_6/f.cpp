#include <iostream>

using namespace std;

bool valid_string(string s, int n){
    int count = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 47 and s[i] < 58){
            count++;
        }
    }
    if(n <= count){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    int n;
    cin >> s >> n;
    valid_string(s,n) ? cout << "YES" : cout << "NO";
    return 0;

}
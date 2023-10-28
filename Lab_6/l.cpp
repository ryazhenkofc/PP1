#include <iostream>
#include <string>
using namespace std;

string valid_string(string s,int n){
    string res = "";
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] > 47 and s[i] < 58){
            res += s[i];
        }
    }
    cout << res << endl;
    int count = 0;
    for(int i = 0; i < res.size(); i++){
        if(res[i] > res[i+1] or res[i] < res[i+1]){
            count++;
            cout << count << endl;
            cout << res[i] << " " << res[i+1] << endl; 
        }
        if(count == n) return "Valid";
    }
    return "Not valid";
}


int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << valid_string(s, n);
    return 0;
}
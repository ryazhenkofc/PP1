#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string s1;
    string c;
    cin >> s >> s1 >> c;
    for(char m : s){
        for(char n : s1){
            if(m == n){
                s.replace(s.find(m), 1, c);
            }
        }
    }
    cout << s;
    return 0;
}


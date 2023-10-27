#include <iostream>

using namespace std;

int main(){
    string s;
    char c;
    int a;
    cin >> s >> c >> a;
    int count = 0;
    for (char m : s){
        if (m == c){
            count++;
        }
    }
    count == a ? cout << "YES" : cout << "NO";
    return 0;
}
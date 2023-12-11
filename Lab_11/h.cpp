#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(char c : s) cout << char((c - 'A' + n) % 26 + 'A');
    return 0;
}

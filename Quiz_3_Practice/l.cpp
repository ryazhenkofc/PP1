#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, ans;
    getline(cin, s);

    for (char c : s) {
        if (c == 'z' || c == 'Z') c -= 25;
        else if (c != ' ' && c != 'z' && c != 'Z') c++;
        ans += c;
    }

    cout << ans << endl;
    return 0;
}

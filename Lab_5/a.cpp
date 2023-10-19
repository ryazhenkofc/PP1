#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cap = 0;
    int sml = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
        cap++;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
        sml++;
        }
    }

    cout << sml << " " << cap << endl;

    return 0;
}

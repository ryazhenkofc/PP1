#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string substr = "@gmail.com";
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; i++) cin >> names[i];
    
    for (auto s : names) {
        if (s.find(substr) != string::npos){
            s.erase(s.find(substr), substr.length());
            cout << s << endl;
        }
    }
    return 0;
}

#include <iostream>
#include <map>

using namespace std;

void registration(map<string, string> base){
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        string login, password;
        cin >> login >> password;

        if (base.find(login) == base.end()) {
            cout << "login error" << endl;
        } 
        else if (base[login] == password) {
            cout << "correct password" << endl;
        } 
        else {
            cout << "password error" << endl;
        }
    }
}

int main() {
    int n;
    map<string, string> base;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string login, password;
        cin >> login >> password;

        base[login] = password;
        base[password] = login;
    }
    registration(base);
}

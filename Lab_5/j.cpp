#include <iostream> 
#include <algorithm>

using namespace std;

int main(){ 
    string s; 
    cin >> s; 

    for (char c = 'a'; c <= 'z'; c++) {
        string tmp = s + c;
        reverse(tmp.begin(), tmp.end());

        if (tmp == string(tmp.rbegin(), tmp.rend())) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0; 
}

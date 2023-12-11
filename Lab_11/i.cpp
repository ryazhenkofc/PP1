#include <iostream>
#include <algorithm> 
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    do {
        string rs = s; 
        reverse(rs.begin(), rs.end());        
        if(s == rs) {
            cout << "ZA WARUDO TOKI WO TOMARE" << endl;
            return 0;
    }
    } while(next_permutation(s.begin(), s.end()));
    

    cout << "JOJO" << endl;

    return 0;
}

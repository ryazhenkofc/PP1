#include <iostream> 

using namespace std;

int main(){ 
    string s; 
    cin >> s; 
    bool isTrue = true;
    for (int i = 0; i < s.size()-1;i++ ){  
        if (s[i] > s[i+1]){ 
            isTrue = false;
            break;
        } 
    } 
    if (isTrue) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }


    return 0; 
}
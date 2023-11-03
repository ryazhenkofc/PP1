#include <iostream>
#include <set>

using namespace std;

void user_exist(int n, set<string> s){
        for(int i = 0; i < n; i++){
        string x;
        cin >> x;

        bool exists = false;
        for(set<string>::iterator it = s.begin(); it != s.end(); it++){
            if(x == *it){
                exists = true;
                break;
            }
        }

        if(!exists){
            cout << "new user added" << endl;
            s.insert(x);
        } else {
            cout << "user already exists" << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    set<string> s;
    user_exist(n, s);
    return 0;
}

#include <iostream> 
#include <string>

using namespace std;

int main(){ 
    string s; 
    cin >> s; 
    char c = 'a'; 
    for (char x : s){  
        if (x > c){ 
            c = x;
        } 
    } 
    cout << c << endl; 

    return 0; 
}
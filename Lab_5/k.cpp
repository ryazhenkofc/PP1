#include <iostream> 
#include <string>
using namespace std;

int main(){ 
    string s; 
    cin >> s; 
    int count = 0;
    for (char x : s){  
        if (x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u'){ 
            count++;
        } 
    } 
    cout << count << endl; 

    return 0; 
}
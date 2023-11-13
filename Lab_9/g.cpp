#include <iostream> 

using namespace std; 

void queue(string s){
    string res; 
    int count = 0; 
    for(int i = 0; i < s.size(); i++){ 
        if(s[i] == '0'){ 
            cout << "0"; 
            count = 0; 
        } 
        else{ 
            for(int j = i; j < s.size(); j++){ 
                if(s[j] == '1'){ 
                    count++; 
                } 
                if(count == 2){ 
                    count = 0; 
                    i = j; 
                    break; 
                } 
                if(count == 1 and s[j] != s[j+1] ){ 
                    cout << "1"; 
                    count = 0; 
                    i = j; 
                    break; 
                } 
            } 
        } 
    } 
}

int main(){ 
    string s; 
    cin >> s; 
    queue(s);
    return 0; 
}
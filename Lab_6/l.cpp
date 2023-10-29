#include<iostream>

using namespace std;

string valid_string(string s, int n){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(!(s[i]>='0'&&s[i]<='9')){
            count=0;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            count++;
        }
        if(count==n){
            return "Valid";
            break;
        }
    }
    return "Not valid";
}

int main(){
    string s;
    int n;
    cin >> s >> n;
    cout << valid_string(s, n);
}
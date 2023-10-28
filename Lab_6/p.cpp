#include <iostream>

using namespace std;

int positive(int n){
    return n > 0 ? n : -n;
}

int main(){
    int n;
    cin >> n;
    cout << positive(n);
}
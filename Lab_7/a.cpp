#include <iostream>

using namespace std;

long long degree(int n){
    if(n == 0)  return 1;
    else return 2 * degree(n - 1);
}

int main(){
    int n;
    cin >> n;

    cout << degree(n);
}
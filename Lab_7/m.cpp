#include <iostream>

using namespace std;

int simple_recursion(int n, int num = 1){
    cout << num << " ";
    if(n == num) return n;
    else return simple_recursion(n, num + 1);
}

int main(){
    int n;
    cin >> n;
    simple_recursion(n);
}

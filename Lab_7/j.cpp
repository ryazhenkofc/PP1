#include <iostream>

using namespace std;

int heater_almat(int n, int sum = 0){
return n == 0 ? sum : heater_almat(n / 10, sum + (n % 10) / 2);
}

int main(){
    int n;
    cin >> n;
    cout << heater_almat(n);
}
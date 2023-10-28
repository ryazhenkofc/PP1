#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void hypotenuse(int a, int b){
    float c = sqrt(a*a + b*b);
    cout << setprecision(4) << c;
    return;
}
int main(){
    int a, b;
    cin >> a >> b;
    hypotenuse(a,b);
}


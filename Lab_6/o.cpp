#include <iostream>

using namespace std;

string lucky_ticket(int n){
    int last = n % 10;
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    if(sum % last == 0) return "Yes";
    else return "No";

}

int main(){
    int n;
    cin >> n;
    cout << lucky_ticket(n);
}
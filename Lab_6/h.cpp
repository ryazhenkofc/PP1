#include <iostream>

using namespace std;

string valid_number(int n){
   while(n > 0){
        if(n % 10 >= 0){
            if(n % 2 == 1){
                return "Not valid";
            }
        }
        n /= 10;
   }
   return "Valid";
}


int main(){

    int n;
    cin >> n;
    cout << valid_number(n);
    return 0;
}
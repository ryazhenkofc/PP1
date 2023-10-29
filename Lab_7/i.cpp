#include <iostream>

using namespace std;

int inf_sum(int n){
    int sum = 0;
    while(true){
        cin >> n;
        sum += n;
        if(n == 0){
            break;
        }
    }    
    return sum;
}

int main(){
    int n;
    cout << inf_sum(n);
}
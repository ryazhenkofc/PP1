#include <iostream>

using namespace std;

void books(int n){
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int book;
    cin >> book;
    bool inStock = true;
    for(int i = 0; i < n; i++){
        if(arr[i] == book){
            inStock = true;
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    return;
        



}

int main(){
    int n;
    cin >> n;
    books(n);
}
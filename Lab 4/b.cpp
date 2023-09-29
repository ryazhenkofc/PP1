#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int max = arr[0][0];
    int second_largest = arr[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > second_largest && arr[i][j] < max){
                second_largest = arr[i][j];
            }
            
        }
            
        }
        if(second_largest > 0){
            cout << second_largest;
            return 0;
        }else
        cout << "0";
        
    return 0;
}
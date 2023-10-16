#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];

    int left = 0, right = n - 1, top = 0, bottom = n - 1, counter = 1;
    
    while(left <= right && top <= bottom) {
        for (int i = top; i <= bottom; i++) {
            arr[left][i] = counter;
            counter++;
        }
        left++;

        for (int i = left; i <= right; i++) {
            arr[i][bottom] = counter;
            counter++;
        }
        bottom--;

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[right][i] = counter;
                counter++;
            }
            right--;
        }

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[i][top] = counter;
                counter++;
            }   
            top++;
        }
    }

    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
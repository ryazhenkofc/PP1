#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    } 
    cout << "coordinates of min elements:" << endl;
    int pos1 = 0, pos2 = 0, sum = 0;
    for(int j = 0; j < m; j++){
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            if(arr[i][j] < min){
                min = arr[i][j];
                pos1 = i;
                pos2 = j;
            }   
        }
        cout << pos1 + 1 << ";" << pos2 + 1 << endl;
        sum += min;
    } 
    cout << endl << "Their sum:" << endl << sum;
    return 0;
}
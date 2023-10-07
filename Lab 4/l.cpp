#include <iostream>
#include <bitset>

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
    cout << "coordinates of min elements:";
    int pos = 0, pos1 = 0, sum = 0;
    for(int j = 0; j < m; j++){
        int min = 999999999;
        for(int i = 0; i < n; i++){
            if(arr[i][j] < min){
                min = arr[i][j];
                pos1 = i;
                pos = j;
            }   
        }
        cout << endl << pos1 + 1 << ";" << pos + 1;
        sum += min;
    } 
    cout << endl <<endl << "Their sum:" << endl << sum;
    return 0;
}
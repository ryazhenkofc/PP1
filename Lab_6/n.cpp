#include <iostream>

using namespace std;
void array_transpose(int n, int m){
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int b[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    array_transpose(n, m);
}
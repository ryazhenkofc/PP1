#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
input data
4
inc
12 12 14
12 12 12
24 23 42
12 42 23

*/

int main(){
    int n;
    string s;
    cin >> n >> s;
    int arr[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j]; 
        }
    }
    vector<int> seconds;
    for(int i = 0; i < n; i++){
        seconds.push_back(arr[i][0]*3600 + arr[i][1]*60 + arr[i][2]);
    }
    if(s == "inc"){
        sort(seconds.begin(), seconds.end());
        for(int x : seconds){
            cout << x/3600 << " " << (x%3600)/60 << " " << (x%3600)%60 << endl;
        }
    }
    else{
        sort(seconds.rbegin(), seconds.rend());
        for(int x : seconds){
            cout << x/3600 << " " << (x%3600)/60 << " " << (x%3600)%60 << endl;
        }
    }
    return 0;
}
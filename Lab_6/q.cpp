#include <iostream>

using namespace std;

double girl_percentage(int total, int girls){
    return girls * 100.0 / total;
}

int main(){
    int total, girls;
    cin >> total >> girls;
    cout << girl_percentage(total, girls);
}
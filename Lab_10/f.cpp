#include <iostream>

using namespace std;

int main(){
    int subjects;
    cin >> subjects;
    int points[subjects][4];
    for(int i = 0; i < subjects; i++){
        for(int j = 0; j < 4; j++){
            cin >> points[i][j];
        }
    }
    double arr[subjects][2]; // GP | CREDIT
    
    for(int i = 0; i < subjects; i++){
        int sum = 0;
        for(int j = 0; j < 4; j++){
            arr[i][1] = points[i][3];
            if(points[i][0] + points[i][1] < 30 or points[i][2] < 20){
                arr[i][0] = 0;
                break;
            }
            else{
                sum += points[i][j];
                arr[i][0] = (double)sum/points[i][3];
                
            }

    return 0;
}
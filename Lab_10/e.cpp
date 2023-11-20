#include <iostream>
#include <map>

using namespace std;

int main(){

    int nDays;
    cin >> nDays;
    map<string, int> m;
    double totalStudents = 0;
    for(int i = 0; i < nDays; i++){
        int NumberOfCities;
        cin >> NumberOfCities;
        string city;
        int NumberOfStudents;
        for(int j = 0; j < NumberOfCities; j++){
            cin >> city >> NumberOfStudents;
            m[city] += NumberOfStudents;
            totalStudents += NumberOfStudents;
        } 
    }
    for(auto x : m){
        cout << x.first << " " << (x.second / totalStudents) * 100 << endl;
    }

    return 0;
}
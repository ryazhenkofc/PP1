#include <iostream>
#include <map>

using namespace std;

int days_for_holliday(string s){
    map<string, int> week = {
        {"MON", 1},
        {"TUE", 2},
        {"WED", 3},
        {"THU", 4},
        {"FRI", 5},
        {"SAT", 6},
        {"SUN", 7}
    };

    int currDay = week[s];

    int daysToNextSunday = 7 - currDay;
    daysToNextSunday = (daysToNextSunday <= 0) ? daysToNextSunday + 7 : daysToNextSunday;
    return daysToNextSunday;
}

int main(){
    string s;
    cin >> s;
    cout << days_for_holliday(s);
    return 0;
}
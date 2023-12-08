#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<pair<pair<string, int>, pair<string, int>>, int> teams;

    for (int i = 0; i < n; i++) {
        string student1, student2;
        int mark1, mark2;
        cin >> student1 >> mark1 >> student2 >> mark2;
        int total = mark1 + mark2;
        teams[make_pair(make_pair(student1, mark1), make_pair(student2, mark2))] = total;
    }

    for (auto& team : teams) {
        cout << team.first.first.first << " and " << team.first.second.first << " " << team.second << endl;
    }
}

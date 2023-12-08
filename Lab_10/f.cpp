#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<tuple<int, int, int, int>> subjects(n);
    for (int i = 0; i < n; i++) {
        int att1, att2, final, credits;
        cin >> att1 >> att2 >> final >> credits;
        subjects[i] = make_tuple(att1, att2, final, credits);
    }

    double total_gp = 0;
    double total_credits = 0;

    for (const auto& subject : subjects) {
        int att1, att2, final, credits;
        tie(att1, att2, final, credits) = subject;
        float gp;
        int score = att1 + att2 + final - 50;

        if (att1 + att2 < 30 || final < 20) {
            gp = 0.0;
        } else{
            if(score >= 5 and score < 10){ 
                gp = 1 + 0.333333;  
            } 
            if(score >= 10 and score < 15){ 
                gp = 1 + 0.666667;  
            } 
            if(score >= 15 and score < 20){ 
                gp = 2;  
            } 
            if(score >= 20 and score < 25){ 
                gp = 2 + 0.333333;  
            } 
            if(score >= 25 and score < 30){ 
                gp = 2 + 0.666667;  
            } 
            if(score >= 30 and score < 35){ 
                gp = 3;  
            } 
            if(score >= 35 and score < 40){ 
                gp = 3 + 0.333333;  
            } 
            if(score >= 40 and score < 45){ 
                gp = 3 + 0.666667;  
            } 
            if(score >= 45 and score <= 50){ 
                gp = 4;  
            } 
        }
        total_gp += gp * credits;
        total_credits += credits;
    }
    double gpa = total_gp / total_credits;

    cout << gpa;

    return 0;
}